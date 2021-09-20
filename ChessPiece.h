#ifndef CHESS_PIECE
#define CHESS_PIECE

#include <string>

class ChessPiece
{
public:
	ChessPiece(std::string color);
	ChessPiece(const ChessPiece& other);
	ChessPiece(ChessPiece&& other) noexcept;
	friend void swapObjects(ChessPiece& left, ChessPiece& right);
	ChessPiece& operator=(ChessPiece other);
	virtual ~ChessPiece();
private:
	std::string colorOfPiece;
};


#endif //CHESS_PIECE
