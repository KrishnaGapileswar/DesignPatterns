#ifndef KNIGHT_MOVEMENT
#define KNIGHT_MOVEMENT

#include "MovementBehavior.h"
#include <iostream>

class KnightMovement : public MovementBehavior
{
public:
	void move() override
	{
		std::cout << "A Knight can move in L shape only.\n";
	}
};
#endif //KNIGHT_MOVEMENT
