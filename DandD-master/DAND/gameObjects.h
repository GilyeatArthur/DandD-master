#pragma once



class Player
{
public:
	//player();
	int pMaxHealth;
	int pHealth;
	int attack = 10;
	int magAttack = 10;
	int defence = 10;
	int magDefence = 10;
};

class Fighter : public Player
{
public:
	int damage = attack * 2;
	int magModifier = magAttack / 2;


};

class Mage : public Player
{
public:
	int damage = attack / 2;
	int magModifier = magAttack * 2;
};

class Monster
{
public:
	int mMaxHealth;
	int pHealth;
	int monAttack = 5;
	int monMagAttack = 5;
	int monDefence = 5;
	int monMagDefence = 5;
};
