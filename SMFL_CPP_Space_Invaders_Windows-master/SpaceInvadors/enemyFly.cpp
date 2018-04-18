#include "enemyFly.h"

enemyFly::enemyFly()
{

}
enemyFly::~enemyFly()
{

}
enemyFly::enemyFly(float x, float y)
{
	setSize(sf::Vector2f(30, 30));
	setFillColor(sf::Color::Red);
	enemyX = x;
	enemyY = y;
	setPosition(enemyX, enemyY);
	enemySpeed = 5.0f;
	enemyDeath = false;
}




