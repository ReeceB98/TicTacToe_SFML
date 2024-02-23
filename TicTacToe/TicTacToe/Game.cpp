#include "Game.h"

const sf::Time Game::TimePerFrame = sf::seconds(1.0f / 60.0f);
sf::CircleShape shape(100.0f);
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

	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			handleInputs(event.key.code, true);
			break;
		case sf::Event::KeyReleased:
			handleInputs(event.key.code, false);
			break;
		case sf::Event::Closed:
			mWindow.close();
			break;
		default:
			break;
		}
	}
}

void Game::update(sf::Time deltaTime)
{
	// Update objects here
	shape.setFillColor(sf::Color::Green);
}

void Game::render()
{
	mWindow.clear();

	// Draw objects here
	mWindow.draw(shape);

	mWindow.display();
}

void Game::handleInputs(sf::Keyboard::Key key, bool isPressed)
{
	// key events for the game
}





