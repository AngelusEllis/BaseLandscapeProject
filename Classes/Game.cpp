#include "Game.h"
#include "cocostudio/CocoStudio.h"
#include "HelloWorldScene.h"
#include "Enemy.h"


USING_NS_CC;

using namespace cocostudio::timeline;

Scene* game::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
	auto layer = game::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool game::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

	srand(time(NULL));
    
    auto rootNode = CSLoader::createNode("Game.csb");

    addChild(rootNode);

	upButtonTouched = false;
	downButtonTouched = false;
	fireButtonTouched = false;
	menuButtonTouched = false;
	firetimer = 0;
	scoreValue = 0;
	healthValue = 100;
	enemytimer = 0;
	enemycount = 0;

	for (int i = 0; i < 50; i++) 
	{
		shot[i] = new bullet();
		shot[i]->fired = false;
		shot[i]->image = Sprite::create("shot.png");
		addChild(shot[i]->image);
	}

	for (int i = 0; i < 50; i++)
	{
		Eshot[i] = new bullet();
		Eshot[i]->fired = false;
		Eshot[i]->image = Sprite::create("shot.png");
		addChild(Eshot[i]->image);
	}

	for (int i = 0; i < 100; i++)
	{
		Enemylist[i] = new Enemy();
		if (i < 40)
		{
			Sprite* temptsprite = Enemylist[i]->init(0);
			addChild(temptsprite);
		}
		else if (i < 70)
		{
			Sprite* temptsprite = Enemylist[i]->init(1);
			addChild(temptsprite);
		}
		else if (i < 99)
		{
			Sprite* temptsprite = Enemylist[i]->init(2);
			addChild(temptsprite);
		}
		else
		{
			Sprite* temptsprite = Enemylist[i]->init(3);
			addChild(temptsprite);
		}
		
	}
	

	bg = (Sprite*)rootNode->getChildByName("bg");
	ship = (Sprite*)rootNode->getChildByName("PlayerShip");
	health = (ui::Text*)rootNode->getChildByName("Health");
	score = (ui::Text*)rootNode->getChildByName("Score");
	healthBar = (ui::LoadingBar*)rootNode->getChildByName("HealthBar");
	gameOver = (Sprite*)rootNode->getChildByName("gameOverbg");
	gameOverText = (ui::Text*)rootNode->getChildByName("gameOverText");
	gameOverButton = (ui::Button*)rootNode->getChildByName("gameOverButton");

	
	

	auto buttonUp = rootNode->getChildByName<cocos2d::ui::Button*>("up_button");
	buttonUp->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{

		if (type == ui::Widget::TouchEventType::BEGAN)
		{
			upButtonTouched = true;
		}
		else if (type == ui::Widget::TouchEventType::ENDED)
		{
			upButtonTouched = false;
		}
	});

	auto buttonDown = rootNode->getChildByName<cocos2d::ui::Button*>("down_button");
	buttonDown->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{

		if (type == ui::Widget::TouchEventType::BEGAN)
		{
			downButtonTouched = true;
		}
		else if (type == ui::Widget::TouchEventType::ENDED)
		{
			downButtonTouched = false;
		}
	});

	auto fireButton = rootNode->getChildByName<cocos2d::ui::Button*>("fire_button");
	fireButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{

		if (type == ui::Widget::TouchEventType::BEGAN)
		{
			fireButtonTouched = true;
		}
		else if (type == ui::Widget::TouchEventType::ENDED)
		{
			fireButtonTouched = false;
		}
	});
	
	gameOverButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{
		if (type == ui::Widget::TouchEventType::ENDED)
		{
			auto scene = HelloWorld::createScene();
			Director::getInstance()->replaceScene(scene);
		}
	});
	

	this->scheduleUpdate();
    return true;
}

void game::update(float delta)
{

	if (healthValue <= 0)
	{
		healthValue = 0;
		health->setString(StringUtils::format("%s %d", "Health: ", healthValue));
		healthBar->setPercent(healthValue);
		
		gameOverText->setString(StringUtils::format("%s %d", "You Scored ", scoreValue));
		gameOver->setPosition(Vec2(480, 320));
		gameOverText->setPosition(Vec2(480, 340));
		gameOverButton->setPosition(Vec2(480, 230));
	}
	else
	{
		health->setString(StringUtils::format("%s %d", "Health: ", healthValue));
		healthBar->setPercent(healthValue);
		//healthValue--;
		score->setString(StringUtils::format("%s %d", "Score: ", scoreValue));

		if (healthValue < 50 && healthValue >= 25)
		{
			healthBar->setColor(ccc3(255, 255, 0));
		}
		else if (healthValue < 25)
		{
			healthBar->setColor(ccc3(255, 0, 0));
		}

		//enemy move and fire
		for (int i = 0; i < 100; i++)
		{
			if (Enemylist[i]->isspawned())
			{
				if (collisionsSphereSphere(Enemylist[i]->image, ship))
				{
					healthValue -= 20;
					Enemylist[i]->despawn();
				}
				if (Enemylist[i]->move(delta))
				{
					Vec2 pos = Enemylist[i]->getPos();
					for (int i = 0; i < 50; i++)
					{
						if (Eshot[i]->fired == false)
						{
							Eshot[i]->image->setPosition(Vec2(pos.x - 40, pos.y));
							Eshot[i]->fired = true;
							firetimer = 0;
							break;
						}
					}
				}
			}
		}

		//enemy spawner
		if (enemycount < 70)
		{
			if (enemytimer > 2)
			{

				if (!Enemylist[enemycount]->isspawned())
				{
					enemytimer = 0;
					Enemylist[enemycount]->spawn();
					enemycount++;
				}
				else
				{
					enemycount++;
				}
			}
		}
		else 
		{
			if (enemytimer > 3)
			{

				if (!Enemylist[enemycount]->isspawned())
				{
					enemytimer = 0;
					Enemylist[enemycount]->spawn();
					enemycount++;
				}
				else
				{
					enemycount++;
				}
			}
		}

		enemytimer += delta;

		auto moveBy = MoveBy::create(0, Vec2(-3 * delta, 0));
		bg->runAction(moveBy);

		Vec2 currentPos = ship->getPosition();
		if (upButtonTouched == true && currentPos.y < 600)
		{
			auto moveBy = MoveBy::create(0, Vec2(0, 150 * delta));
			ship->runAction(moveBy);
		}
		if (downButtonTouched == true && currentPos.y > 40)
		{
			auto moveBy = MoveBy::create(0, Vec2(0, -150 * delta));
			ship->runAction(moveBy);
		}

		if (fireButtonTouched == true && firetimer == 0)
		{
			for (int i = 0; i < 50; i++)
			{
				if (shot[i]->fired == false)
				{
					shot[i]->image->setPosition(Vec2(currentPos.x + 75, currentPos.y));
					shot[i]->fired = true;
					firetimer = 1;
					break;
				}
			}
		}

		if (firetimer > 0)
		{
			firetimer += delta;
			if (firetimer > 1.3)
			{
				firetimer = 0;
			}
		}

		for (int i = 0; i < 50; i++)
		{
			if (shot[i]->fired)
			{
				for (int j = 0; j < 100; j++)
				{
					if (collisionsSphereSphere(shot[i]->image, Enemylist[j]->image))
					{
						Enemylist[j]->despawn();
						shot[i]->fired = false;
						shot[i]->image->setPosition(Vec2(-10, -10));
						scoreValue += 10;
					}
				}
				auto moveBy = MoveBy::create(0, Vec2(10, 0)); //needs updating to go by delta time
				shot[i]->image->runAction(moveBy);
				Vec2 shotPos = shot[i]->image->getPosition();
				if (shotPos.x > 970)
				{
					shot[i]->image->setPosition(Vec2(-10, -10));
					shot[i]->fired = false;
				}
			}
		}

		for (int i = 0; i < 50; i++)
		{
			if (Eshot[i]->fired)
			{
				if (collisionsBoxBox(Eshot[i]->image, ship))
				{
					healthValue -= 20;
					Eshot[i]->image->setPosition(Vec2(-10, -10));
					Eshot[i]->fired = false;
				}
				auto moveBy = MoveBy::create(0, Vec2(-10, 0)); //needs updating to go by delta time
				Eshot[i]->image->runAction(moveBy);
				Vec2 EshotPos = Eshot[i]->image->getPosition();
				if (EshotPos.x < -100)
				{
					Eshot[i]->image->setPosition(Vec2(-10, -10));
					Eshot[i]->fired = false;
				}
			}
		}
	}



}


bool game::collisionsSphereSphere(cocos2d::Sprite* Sprite1, cocos2d::Sprite* Sprite2)
{
	float diff;
	if (Sprite2->getTag() == 14)
	{
		diff = ccpDistance(Sprite1->getPosition(), Vec2((Sprite2->getPosition().x + 40), Sprite2->getPosition().y));

	}
	else
	{
		diff = ccpDistance(Sprite1->getPosition(), Sprite2->getPosition());

	}
	if (diff < (Sprite1->getBoundingBox().size.height / 2) + ((Sprite2->getBoundingBox().size.height / 2) - (150 * Sprite2->getScale())))
	{
		return true;
	}

	
	return false;
}




bool game::collisionsBoxBox(cocos2d::Sprite* Sprite1, cocos2d::Sprite* Sprite2){
	cocos2d::CCRect S1 = Sprite1->getBoundingBox();
	cocos2d::CCRect S2 = Sprite2->getBoundingBox();
	if (S2.intersectsRect(S1)){
		return true;
	}
	return false;
}