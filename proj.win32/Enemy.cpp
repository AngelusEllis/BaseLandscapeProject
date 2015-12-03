#include "Enemy.h"
#include <ctime>
#include "cocostudio/CocoStudio.h"
#include "HelloWorldScene.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Enemy::Enemy()
{

}

Sprite* Enemy::init(int enemyType)
{
	srand(time(NULL));
	if (enemyType == 0)
	{
		health = 1;
		speed = 5;
		scale = 0.3;
		shotTimer = -1000;
		spawned = false;
		image = Sprite::create("SmallAstroid.png");
		type = 0;
		scale = 1;
		image->setPosition(Vec2(-200, -200));
		image->setScale(0.2);
		return image;
	}
}

Enemy::~Enemy()
{
}

void Enemy::spawn()
{
	spawned = true;
	int randomx = (rand() % 560) + 40;
	image->setPosition(Vec2(1000, randomx));
}

void Enemy::move(float delta)
{
	if (type == 0)
	{
		auto moveBy = MoveBy::create(0, Vec2(-30 * delta * speed, 0));
		image->runAction(moveBy);
		Vec2 spritepos = image->getPosition();
		if (spritepos.x < -100)
		{
			despawn();
		}
	}
}

void Enemy::despawn()
{
	spawned = false;
	image->setPosition(Vec2(-200, -200));
}

bool Enemy::isspawned()
{
	return spawned;
}