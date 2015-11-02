#pragma once
 //test
class Player
{
public:
	Player();
	int strMod = (strength -= 10) / 2;
	int dexMod = (dexterity -= 10) / 2;
	int conMod = (constitution -= 10) / 2;
	int wisMod = (wisdom -= 10) / 2;
	int intMod = (intelligence -= 10) / 2;
	int chaMod = (charisma -= 10) / 2;
	int initiative = dexMod;
	int lvl;
	int hitDie;
	int health = ((conMod * lvl) + (hitDie * lvl));
	void setStr(int i);
	int getStr();
private:
	int strength, dexterity, constitution, wisdom, intelligence, charisma;

};