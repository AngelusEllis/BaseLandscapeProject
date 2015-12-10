#ifndef __Game_SCENE_H__
#define __Game_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "Enemy.h"

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

	bool collisionsSphereSphere(Sprite*, Sprite*);
	bool collisionsBoxBox(Sprite*, Sprite*);

private:
	cocos2d::Sprite* bg;
	cocos2d::Sprite* ship;
	cocos2d::Sprite* gameOver;
	cocos2d::ui::Text* gameOverText;
	cocos2d::ui::Text* health;
	cocos2d::ui::Text* score;
	cocos2d::ui::LoadingBar* healthBar;
	cocos2d::ui::Button* gameOverButton;
	cocos2d::ui::Button* pauseButton;
	bool upButtonTouched;
	bool downButtonTouched;
	bool fireButtonTouched;
	bool menuButtonTouched;
	bool paused;
	bool win;
	float firetimer;
	bullet *shot[50];
	bullet *Eshot[50];
	int scoreValue;
	int healthValue;
	Enemy *Enemylist[100];
	float enemytimer;
	int enemycount;
};

#endif 