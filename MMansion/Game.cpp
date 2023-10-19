#include "Game.h"

Game::Game()
{
	window.create(sf::VideoMode(1280, 720), "Maniac Mansion");
	window.setFramerateLimit(60);
}

Game::~Game()
{
	std::cout << "Classe GAME destruida\n";
}

sf::RenderWindow& Game::GetWindow()
{
	return window;
}

bool Game::GameIsOpen()
{
	return window.isOpen();
}

void Game::GameRun()
{
	sf::Event ev;
	while(window.pollEvent(ev))
	{
		if(ev.type == sf::Event::Closed)
		{
			window.close();
		}		
	}
	GameUpdate();
}

void Game::GameUpdate()
{
	window.clear(sf::Color::Cyan);


	window.display();
}


