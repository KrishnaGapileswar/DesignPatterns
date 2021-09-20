#ifndef PAWN_PIECE
#define PAWN_PIECE

#include "ChessPiece.h"
#include "MovementBehavior.h"
#include <memory>

class Pawn : public ChessPiece
{
public:
	Pawn(std::string color);
	Pawn(const Pawn& other);
	Pawn(Pawn&& other) noexcept;
	friend void swapObjects(Pawn& left, Pawn& right);
	Pawn& operator=(Pawn other);
	void movePawn();
	~Pawn();
private:
	std::string name;
	std::shared_ptr<MovementBehavior> movement;
};

#endif //PAWN_PIECE
