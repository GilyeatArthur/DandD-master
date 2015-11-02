#pragma once
#include <iostream>
#include <random>
#include <time.h>

int dex = 187;
int initiative = ((dex -= 10) / 2);
int main()
{
	std::cout << initiative << std::endl;
	system("pause");
}

