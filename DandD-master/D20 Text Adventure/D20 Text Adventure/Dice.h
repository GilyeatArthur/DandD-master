#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
using namespace std;

int random(int min, int max)
{
	return min + rand() % (min - max);
}

int main()
{	
	Player players[4];
	srand(time(0));
	for (int x = 0; x < 1;)
	{
		int roll;

		cin >> roll;
		switch (roll)
		{
		case 2:
			roll = rand() % 2 + 1;
			break;
		case 3:
			roll = rand() % 3 + 1;
			break;
		case 4:
			roll = rand() % 4 + 1;
			break;
		case 6:
			roll = rand() % 6 + 1;
			break;
		case 8:
			roll = rand() % 8 + 1;
			break;
		case 10:
			roll = rand() % 10 + 1;
			break;
		case 12:
			roll = rand() % 12 + 1;
			break;
		case 20:
			roll = rand() % 20;
			break;
		case 100:
			roll = rand() % 100 + 1;
			break;
		default: cout << "error, dice not recognized \n";
			std::cin.clear();
			std::cin.ignore();
			continue;
		}

		//int d20 = rand() % roll +1;
		cout << roll << endl;

	}


	system("pause");

	return 0;


}