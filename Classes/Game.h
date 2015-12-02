#ifndef __Game_SCENE_H__
#define __Game_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"

struct bullet
{
	cocos2d::Sprite* image;
	bool fired;

};

class game : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(game);

	void update(float) override;

private:
	cocos2d::Sprite* bg;
	cocos2d::Sprite* ship;
	cocos2d::ui::Text* health;
	cocos2d::ui::Text* score;
	cocos2d::ui::LoadingBar* healthBar;
	bool upButtonTouched;
	bool downButtonTouched;
	bool fireButtonTouched;
	float firetimer;
	bullet *shot[50];
	int scoreValue;
	int healthValue;
};

#endif 