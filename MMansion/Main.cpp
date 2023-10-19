#include"Game.h"

int main()
{
	Game* game=new Game;

	while(game->GameIsOpen())
	{
		game->GameRun();		
	}
	delete game;
}