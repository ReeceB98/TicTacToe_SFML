#include "Player.h"

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
