#include "Game.h"

const sf::Time Game::TimePerFrame = sf::seconds(1.0f / 60.0f);

Game::Game()
: mWindow(sf::VideoMode(640, 480), "TicTacToe"){}

void Game::Run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	while (mWindow.isOpen())
	{
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > TimePerFrame)
		{
			timeSinceLastUpdate -= TimePerFrame;
			processEvents();
			update(TimePerFrame);
		}
		render();
	}
}

void Game::processEvents()
{
	sf::Event event{};
	// CONTINUE HERE! //
}


