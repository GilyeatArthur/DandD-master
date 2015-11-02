#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameObjects.h"
#include "gameState.h"
#include <iostream>

int main()
{
	srand(time(NULL));

	//bool playingGame = true;
	GameState game;
	STATE state = MainMenu;
	while (!game.GetExit())
	{
		switch (state)
		{
		case Initialization:	game.StartUpScreen();
		case MainMenu:          game.MainMenuScreen();
		case PlayGame:          game.PlayGameScreen();
		case Battle:            game.BattleScreen();
		case Exit:              game.ExitScreen(); return 0;
		}
		std::cout << "Hai!" << std::endl;
		game.CallCurrentState();
	}
}