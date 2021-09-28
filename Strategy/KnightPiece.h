#ifndef KNIGHT_PIECE
#define KNIGHT_PIECE

#include "ChessPiece.h"
#include "MovementBehavior.h"
#include <memory>

class Knight : public ChessPiece
{
public:
	Knight(std::string color);
	Knight(const Knight& other);
	Knight(Knight&& other) noexcept;
	friend void swapObjects(Knight& left, Knight& right);
	Knight& operator=(Knight other);
	void moveKnight();
	~Knight();
private:
	std::string name;
	std::shared_ptr<MovementBehavior> movement;
};

#endif //KNIGHT_PIECE
