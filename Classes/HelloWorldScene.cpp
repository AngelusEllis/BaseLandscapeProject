#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Game.h"
#include "Credits.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto rootNode = CSLoader::createNode("MainScene.csb");

    addChild(rootNode);

	auto startButton = rootNode->getChildByName<cocos2d::ui::Button*>("start_button");
	auto creditsButton = rootNode->getChildByName<cocos2d::ui::Button*>("credits_button");
	auto exitButton = rootNode->getChildByName<cocos2d::ui::Button*>("exit_button");

	startButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{
		if (type == ui::Widget::TouchEventType::ENDED)
		{
			auto scene = game::createScene();
			Director::getInstance()->replaceScene(scene);
		}
	});

	creditsButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{
		if (type == ui::Widget::TouchEventType::ENDED)
		{
			auto scene = Credits::createScene();
			Director::getInstance()->replaceScene(scene);
		}
	});

	exitButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
	{
		if (type == ui::Widget::TouchEventType::ENDED)
		{
			CCDirector::sharedDirector()->end();
		}
	});

    return true;
}
