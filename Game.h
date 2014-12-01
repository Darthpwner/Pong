#ifndef GAME.H
#define GAME.H

#include "Field.h"
#include "Player.h"

class Game
{
	public:
		Game(const Field& f, Player* left, Player* right);
		~Game();
		void showScore();

	private:
		int m_P1_score;
		int m_P2_score;
};

#endif //GAME.H