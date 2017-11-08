/*!
Author: jake
Date: 8/11/17
Task: Create an animal super class for the WaTor project
Version: 1.1
*/
#include "stdafx.h"

class Animal
{

public:
	int type;
	int x;
	int y;
	int turn;
	int moved;
	int spawned;
	Animal();
	~Animal();
	char showAnimal();
	void makeAnimal(int t, int y, int x);

};