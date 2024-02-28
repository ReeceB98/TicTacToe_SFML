#pragma once

#include <iostream>
#include "SFML/Graphics.hpp"

class Player
{
public:
	Player();
	~Player();
	void playersTurn(bool& isPlayerOnesTurn, bool& isPlayerTwosTurn);
	void setSprite();
	void render(sf::RenderWindow &window);


private:
	sf::Texture* texture;
	sf::Sprite* sprite;
};

