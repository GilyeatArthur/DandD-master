#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "gameState.h"
#include <string>

/*GameState::GameState()
{
	exit = false
}*/

GameState game;

void GameState::CallCurrentState()
{


	switch (state)
	{
	case Initialization:	StartUpScreen();
		break;
	case MainMenu:          MainMenuScreen();
		break;
	case PlayGame:          PlayGameScreen();
		break;
	case Battle:            BattleScreen();
		break;
	case Exit:              ExitScreen();
		break;
	}
}


STATE StartUpScreen()
{
	bool tempBool = true;
	std::string selection;
	std::cout << "Welcome to the main menu!" << std::endl;
	std::cout << "1: PlayGame" << std::endl;
	std::cout << "2: Battle" << std::endl;
	std::cout << "3: Exit" << std::endl;

	switch (state(1, 4))
	{
	case 1: return Initialization;
	case 2: return PlayGame; //return will break the state.
	case 3: return Battle;
	case 4: return Exit;
	}

}
void GameState::StartUpScreen()
{
	/*system("cls");
	std::cout << "Welcome to this awesome game!" << std::endl;
	std::cout << "This is a splash or intro state" << std::endl;
	std::cout << "Just a place to show your title/about information" << std::endl;
	system("pause");
	system("cls");*/

}

int state(int min, int max)
{
	int select;

	do
	{
		std::cout << "Enter the number of action you wish to make (" << min << "-" << max << "): ";
		std::cin >> select;

		if (std::cin.fail() || select < min || select > max)
		{
			std::cin.clear();			//clears the input buffer
			std::cin.ignore(80, '\n');	//resets the input buffer
			std::cout << "Invalid entry." << std::endl;
		}
		else break; //stop looping if the input was valid
	} while (true);

	return select;
}


void GameState::MainMenuScreen()
{
	std::cout << "Hai!" << std::endl;
	system("pause");
}

void GameState::PlayGameScreen()
{
	std::cout << "Hallow!" << std::endl;
	system("pause");
}

void GameState::BattleScreen()
{
	std::cout << "For Waffles!" << std::endl;
	system("pause");
}

void GameState::ExitScreen()
{
}

bool GameState::GetExit() {
	return game.shouldClose;
}

void GameState::CloseProgram() {
	game.shouldClose = true;
}