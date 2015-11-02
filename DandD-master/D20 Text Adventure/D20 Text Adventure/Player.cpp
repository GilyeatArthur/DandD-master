#include <iostream>
#include "Dice.h"
#include "Player.h"
#include <random>
#include <time.h>

/*This class will define a players stats and everything that will be affected.
It is not complete, but I will keep adding to it as stuff is added*/

Player::Player()
{
	
}

void Player::setStr(int i)
{
	strength = i;
}

int Player::getStr()
{
	return strength;
}
