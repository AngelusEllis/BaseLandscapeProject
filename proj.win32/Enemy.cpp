#include "Enemy.h"
#include "cocostudio/CocoStudio.h"
#include "HelloWorldScene.h"
#include <math.h>

USING_NS_CC;

using namespace cocostudio::timeline;

Enemy::Enemy()
{

}

Sprite* Enemy::init(int enemyType)
{
	int direction;
	switch(enemyType)
	{
	case 0:
	default:
		health = 1;
		speed = 5;
		scale = (float)((rand() % 30) + 5) / 100.0f;
		shotTimer = -1000;
		spawned = false;
		image = Sprite::create("SmallAstroid.png");
		type = 0;
		rotation = 0;
		image->setPosition(Vec2(-400, -400));
		image->setScale(scale);
		return image;
		break;
		
	case 1:
		health = 1;
		speed = 5;
		scale = 0.15f;
		shotTimer = -1000;
		spawned = false;
		image = Sprite::create("HostileShip1.png");
		type = 1;
		direction = (rand() % 2);
		if (direction == 0)
		{
			Up = true;
		}
		else
		{
			Up = false;
		}
		image->setPosition(Vec2(-400, -400));
		image->setScale(scale);
		return image;
		break;

	case 2:
		health = 3;
		speed = 3;
		scale = 0.15f;
		shotTimer = 0.0f;
		spawned = false;
		image = Sprite::create("HostileShip2.png");
		type = 2;
		image->setPosition(Vec2(-400, -400));
		image->setScale(scale);
		image->setRotation(-90.0f);
		ticks = 0;
		return image;
		break;

	case 3:
		health = 20;
		speed = 3;
		scale = 0.15f;
		shotTimer = 0.0f;
		spawned = false;
		image = Sprite::create("Boss.png");
		type = 3;
		image->setPosition(Vec2(-400, -400));
		image->setScale(scale);
		//image->setRotation(-90.0f);
		ticks = 0;
		return image;
		break;
}
}

Enemy::~Enemy()
{
}

void Enemy::spawn()
{
	spawned = true;
	int randomx;
	if (type == 2)
	{
		randomx = (rand() % 200) + 40;
		image->setPosition(Vec2(1100, randomx));
	}
	else if (type == 3)
	{
		image->setPosition(Vec2(940, 120));
	}
	else
	{
		randomx = (rand() % 560) + 40;
		image->setPosition(Vec2(1100, randomx));
	}
}

bool Enemy::move(float delta)
{
	if (type == 0)
	{
		auto moveBy = MoveBy::create(0, Vec2(-30 * delta * speed, 0));
		image->runAction(moveBy);
		Vec2 spritepos = image->getPosition();
		rotation -= 1.0f;
		image->setRotation(rotation);
		if (spritepos.x < -300)
		{
			despawn();
		}
		return false;
	}
	else if (type == 1)
	{
		Vec2 spritepos = image->getPosition();
		if (spritepos.x < -300)
		{
			despawn();
		}
		else
		{
			if (Up)
			{
				if (spritepos.y > 580)
				{
					Up = false;
				}
				else
				{
					auto moveBy = MoveBy::create(0, Vec2(-30 * delta * speed, delta * speed * 20));
					image->runAction(moveBy);
				}
			}
			else
			{
				if (spritepos.y < 60)
				{
					Up = true;
				}
				else
				{
					auto moveBy = MoveBy::create(0, Vec2(-30 * delta * speed, delta * speed * -20));
					image->runAction(moveBy);
				}
			}
		}
		return false;
	}
	else if (type == 2)
	{
		ticks++;
		float newYPos = 4 * sin(ticks * 0.5 * 3.14 / 80);
		auto moveBy = MoveBy::create(0, Vec2(-30 * delta * speed, newYPos));
		image->runAction(moveBy);
		Vec2 spritepos = image->getPosition();
		if (spritepos.x < -300)
		{
			despawn();
		}
		shotTimer += delta;
		if (shotTimer > 3)
		{
			shotTimer = 0;
			return true;
		}
		return false;
	}
	else
	{
		ticks++;
		float newYPos = 4 * sin(ticks * 0.5 * 3.14 / 80);
		auto moveBy = MoveBy::create(0, Vec2(0, newYPos));
		image->runAction(moveBy);
		Vec2 spritepos = image->getPosition();
		if (spritepos.x < -300)
		{
			despawn();
		}
		shotTimer += delta;
		if (shotTimer > 0.7)
		{
			shotTimer = 0;
			return true;
		}
		return false;
	}
}

void Enemy::despawn()
{
	spawned = false;
	image->setPosition(Vec2(-400, -400));
}

bool Enemy::isspawned()
{
	return spawned;
}

Vec2 Enemy::getPos()
{
	Vec2 spritepos = image->getPosition();
	return spritepos;
}