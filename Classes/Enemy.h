#pragma once
#include "Struts.h"
class Enemy
{
public:
	Enemy();
	~Enemy();
	void setHealth(int);
	int getHealth();
	bool isDead();
	Vector3 getHeading();
	void setHeading(Vector3);
	float getSpeed();
	void setspeed(float);

private:
	int health;
	int shotTimer;
	bool dead;
	Vector3 heading;
	float speed;
};

