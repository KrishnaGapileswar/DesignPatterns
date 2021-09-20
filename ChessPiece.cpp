#include "pch.h"
#include "ChessPiece.h"
#include <iostream>

ChessPiece::ChessPiece(std::string color)
	: colorOfPiece(color)
{
	std::cout << "Default constructing the base chess piece.\n";
}

ChessPiece::ChessPiece(const ChessPiece& other)
	: colorOfPiece(other.colorOfPiece)
{
	std::cout << "Copy constructing the base chess piece.\n";
}

ChessPiece::ChessPiece(ChessPiece&& other) noexcept
	: colorOfPiece(std::move(other.colorOfPiece))
{
	std::cout << "Move constructing the base chess piece.\n";
}

void swapObjects(ChessPiece& left, ChessPiece& right)
{
	std::swap(left.colorOfPiece, right.colorOfPiece);
}

ChessPiece& ChessPiece::operator=(ChessPiece other)
{
	std::cout << "Running copy and swap idiom in base ChessPiece.\n";
	swapObjects(*this, other);
	return *this;
}

ChessPiece::~ChessPiece()
{
	std::cout << "Destructing base chess piece.\n";
}
