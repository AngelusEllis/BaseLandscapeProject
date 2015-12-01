#include "Game.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

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
    
    auto rootNode = CSLoader::createNode("Game.csb");

    addChild(rootNode);

	upButtonTouched = false;
	downButtonTouched = false;
	fireButtonTouched = false;

	for (int i = 0; i < 50; i++)
	{
		shot[i] = new bullet();
		shot[i]->fired = false;
		shot[i]->image = Sprite::create("shot.png");
	}

	auto test = Sprite::create("PlayerShip.png");
	test->setPosition(Vec2(100, 200));

	bg = (Sprite*)rootNode->getChildByName("bg");
	ship = (Sprite*)rootNode->getChildByName("PlayerShip");


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
	

	this->scheduleUpdate();
    return true;
}

void game::update(float delta)
{
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

	if (fireButtonTouched == true)
	{
		for (int i = 0; i < 50; i++)
		{
			if (shot[i]->fired == false)
			{
				shot[i]->image->setPosition(Vec2(100, 200));
				break;
			}
		}
	}


	for (int i = 0; i < 50; i++)
	{
		if (shot[i]->fired)
		{
			auto moveBy = MoveBy::create(0, Vec2(10, 0)); //needs updating to go by delta time
			shot[i]->image->runAction(moveBy);
		}
	}

	
}
