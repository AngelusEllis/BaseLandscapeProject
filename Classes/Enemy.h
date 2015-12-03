#pragma once
#include "cocos2d.h"
using  namespace cocos2d;

class Enemy
{
public:
	Enemy();
	~Enemy();
	Sprite* init(int);
	void spawn();
	void move(float);
	void despawn();
	void setHealth(int);
	int getHealth();
	void setspeed(float);
	bool isspawned();

private:
	int health;
	int shotTimer;
	float speed;
	bool spawned;
	cocos2d::Sprite* image;
	int type;
	float scale;
};

