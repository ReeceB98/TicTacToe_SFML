#include "Game.h"

// How many will be done in 1 second
const sf::Time Game::TimePerFrame = sf::seconds(1.0f / 60.0f);
//sf::CircleShape shape(100.0f);
Game::Game()
: mWindow(sf::VideoMode(640, 480), "TicTacToe"){}

// The Game loop
void Game::Run()
{
	// Time is set to zero
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	
	while (mWindow.isOpen())
	{
		// Time resets back to zero after 60 frames have been achieved in a second
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

// key events for the game
void Game::processEvents()
{
	sf::Event event{};

	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			handleInputs(event.key.code, event.mouseButton.button, true);
			break;
		case sf::Event::KeyReleased:
			handleInputs(event.key.code, event.mouseButton.button, false);
			break;
		case sf::Event::MouseButtonPressed:
			handleInputs(event.key.code, event.mouseButton.button, true);
			break;
		case sf::Event::MouseButtonReleased:
			handleInputs(event.key.code, event.mouseButton.button, false);
			break;
		case sf::Event::Closed:
			mWindow.close();
			break;
		default:
			break;
		}
	}
}

// Initialize game objects
void Game::initialize()
{
	
}

// Update objects in the game
void Game::update(sf::Time deltaTime)
{
	// Update objects here
	//shape.setFillColor(sf::Color::Green);
}

// Draw the objects in the game
void Game::render()
{
	mWindow.clear();

	// Draw objects here
	//mWindow.draw(shape);
	
	// CONTINUE THIS! 
	//mWindow.draw(player1.render(mWindow));

	mWindow.display();
}

// Specify what the inputs do for the game
void Game::handleInputs(sf::Keyboard::Key key, sf::Mouse::Button button, bool isPressed)
{

	// key events for the game
	if (button == sf::Mouse::Left && isPressed && isPlayer1)
	{
		std::cout << " Left Mouse Pressed = True\n";
		player1.playersTurn(isPlayer1 = true, isPlayer2 = false);
	}
	else if (button == sf::Mouse::Left && isPressed && isPlayer2)
	{
		std::cout << " Left Mouse Pressed = True\n";
		player2.playersTurn(isPlayer1 = false, isPlayer2 = true);
	}
	else if (button == sf::Mouse::Left && !isPressed && isPlayer1)
	{
		std::cout << "Left Mouse Pressed = False\n";
		isPlayer1 = false;
		isPlayer2 = true;
	}
	else if (button == sf::Mouse::Left && !isPressed && isPlayer2)
	{
		std::cout << "Left Mouse Pressed = False\n";
		isPlayer1 = true;
		isPlayer2 = false;
	}
	else
	{
		//std::cout << "Left Mouse Pressed = False\n";
	}
}





