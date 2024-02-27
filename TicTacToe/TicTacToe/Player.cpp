#include "Player.h"

Player::Player() : texture(new sf::Texture()), sprite(new sf::Sprite()) 
{
	if (!texture->loadFromFile("C:/VisualStudio/TicTacToe_SFML/TicTacToe/Images/YellowSquare.png"))
	{
		std::cout << "Texture did not load!\n";
	}

	sprite->setTexture(*texture);
}

Player::~Player()
{
	delete texture;
	delete sprite;
}

void Player::playersTurn(bool& isPlayerOnesTurn, bool& isPlayerTwosTurn)
{
	bool isPlayerOne = isPlayerOnesTurn;
	bool isPlayerTwo = isPlayerTwosTurn;

	if (isPlayerOne && !isPlayerTwo)
	{
		std::cout << "Turn: Player 1\n";
	}
	else
	{
		std::cout << "Turn: Player 2\n";
	}
}

void Player::setSprite()
{
	if (!texture->loadFromFile("C:/VisualStudio/TicTacToe_SFML/TicTacToe/Images/YellowSquare.png"))
	{
		std::cout << "Texture did not load!\n";
	}

	sprite->setTexture(*texture);
}

void Player::render(sf::RenderWindow window)
{
	window.draw(*sprite);
}
