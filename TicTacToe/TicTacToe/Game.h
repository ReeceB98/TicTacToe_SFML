#pragma once

#include "SFML/Graphics.hpp"

class Game
{
public:
	// Constructor & running the game
	Game();
	void Run();

private:
	// Processing SFML game events
	void processEvents();
	// Updates the game on screen with the use of delta time
	void update(sf::Time deltaTime);
	// Draw graphics to the screen
	void render();
	// Handling any inputs needed for the game
	void handleInputs(sf::Keyboard::Key key, bool isPressed);

	// Render the game window
	sf::RenderWindow mWindow;

	// This will be used to adjust the frame rate
	static const sf::Time TimePerFrame;
};

