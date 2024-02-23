#pragma once

#include <iostream>
#include "SFML/Graphics.hpp"

class Player
{
public:
	void playersTurn(bool& isPlayerOnesTurn, bool& isPlayerTwosTurn);

private:

	sf::Texture texture;
	sf::Sprite sprite;
};

