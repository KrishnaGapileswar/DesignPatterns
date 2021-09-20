#ifndef PAWN_MOVEMENT
#define PAWN_MOVEMENT

#include "MovementBehavior.h"
#include <iostream>

class PawnMovement : public MovementBehavior
{
public:
	void move() override
	{
		std::cout << "A pawn can move in 1 or 2 steps only in straight line and diagonally to hit opponent.\n";
	}
};
#endif //PAWN_MOVEMENT
