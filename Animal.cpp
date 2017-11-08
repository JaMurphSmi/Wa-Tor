/*!
Author: jake
Date: 8/11/17
Task: Create an animal super class for the WaTor project
Version: 1.1
*/

#include "stdafx.h"
#include "Animal.h"

Animal::Animal()
{

}

Animal::~Animal()
{

}

void Animal::makeAnimal(int type, int y, int x) {
	this->type = type;
	this->x = x;
	this->y = y;
	turn = 0;
	moved = 0;
	spawned = 0;

}

char Animal::showAnimal()
{
	if (type == 0)
		return '~';
	if (type == 1)
		return '#';
	if (type == 2)
		return '&';
}
