#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	sf::RenderWindow& GetWindow();
	bool GameIsOpen();
	void GameRun();
private:
	sf::VideoMode video;
	sf::RenderWindow window;
	void GameUpdate();

};

