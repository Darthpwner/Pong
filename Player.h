#ifndef PLAYER.H
#define PLAYER.H

#include <string>

class Player
{
	public:
		Player(std::string name);	//Create a Player with indicated name
		std::string name() const;	//Return the name of our Player
		virtual bool isInteractive() const;
		//Return false if the player is a computer player. Return true if the player is human. 
		virtual int chooseMove(const Field& f, const Player& p) const = 0;
		//Move the player up and down
		~Player();					//Destroy the player at the end of the game
	private:
		std::string m_name;
		Field* m_field;
};

class HumanPlayer: public Player
{
	public:
		HumanPlayer(std::string name);
		virtual bool isInteractive() const;
		virtual int chooseMove(const Field& f, const Player& p) const;
		~HumanPlayer();
	private:
};

class ComputerPlayerEasy: public Player
{
	public:
		ComputerPlayerEasy(std::string name);
		virtual int chooseMove(const Field& f, const Player& p) const;
		~ComputerPlayerEasy();
	private:
};

class ComputerPlayerMedium: public Player
{
	public:
		ComputerPlayerMedium(std::string name);
		virtual int chooseMove(const Field& f, const Player& p) const;
		~ComputerPlayerMedium();
	private:
};

class ComputerPlayerHard: public Player
{
	public:
		ComputerPlayerHard(std::string name);
		virtual int chooseMove(const Field& f, const Player& p) const;
		~ComputerPlayerHard();
	private:
};

#endif //PLAYER.H