/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			09 December 2016
//
//	Description:	The Player Class
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <stdlib.h>
#include <Windows.h>
#include "Object.h"
using std::cout;
using std::endl;
using std::cin;

class Player : public Object
{
private:
	string currentRoom;						// the room tucker is currently occupying
	int cRoom;								// the room tucker is in
	Object *backpack[9];					// a backpack with 10 slots in it
	int maxCarry = 20;						// the max weight tucker can carry is 20 lbs
	int numItems;							// the number of items the player is carrying

public:
	Player();										// default constructor for Player
	Player(int row, int col, string room, int r);	// constructor for Player initializing rowPos, colPos, and room
	~Player();										// deconstructor for Player

	void setSymbol(char s);					// a function which changes the player's symbol
	void setPlayerRoom(string room, int i);	// a function which changes the room the player is in
	void setColor(string color);			// sets the color of the text on screen

	string getPlayerRoom();					// a function which gets the room the player is in
	int getCRoom();							// gets the room tucker is in

	bool addObject(Object *o);				// adds an object to backpack and returns true if it worked
	void displayBackpack();					// displays the backpack and includes a message on how to use it
	Object* dropObject(int i);				// drops an object from the backpack
	int getWeight();						// returns the weight of the object
	string getName();						// returns the name of the Object
	string checkObject(int i);				// checks to see if the object to drop is a stone corresponding to a switch
	void setWeight(int w);					// sets the weight of an object
};

#endif

