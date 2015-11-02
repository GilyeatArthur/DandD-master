#pragma once
#include "gameObjects.h"

enum STATE {Initialization, MainMenu, PlayGame, Battle, Exit};

class GameState
{
public:
	void(GameState::*currentState)() = nullptr;

	bool GetExit();
	bool shouldClose;
	void StartUpScreen();

	void MainMenuScreen();

	void PlayGameScreen();

	void BattleScreen();

	void ExitScreen();


	void CloseProgram();
	GameState() { shouldClose = false; state = Initialization; }
	void CallCurrentState();
private:
	STATE state;
	Player player;

};
int state(int min, int max);




