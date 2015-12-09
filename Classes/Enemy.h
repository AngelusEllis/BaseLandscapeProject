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
	bool move(float);
	void despawn();
	void setHealth(int);
	int getHealth();
	void setspeed(float);
	bool isspawned();
	Vec2 getPos();

private:
	int health;
	float shotTimer;
	float speed;
	bool spawned;

	int type;
	float scale;
	float rotation;
	int ticks;
	bool Up;
public:
	cocos2d::Sprite* image;
};

