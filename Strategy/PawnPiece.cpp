#include "pch.h"
#include "PawnPiece.h"
#include "PawnMovement.h"
#include <iostream>

Pawn::Pawn(std::string color)
	: ChessPiece(color),
	name("Pawn"),
	movement(std::make_shared<PawnMovement>())
{
	std::cout << "Constructing Pawn.\n";
}

Pawn::Pawn(const Pawn& other)
	: ChessPiece(other),
	name(other.name),
	movement(other.movement)
{
	std::cout << "Copy constructing Pawn.\n";
}

Pawn::Pawn(Pawn&& other) noexcept
	: ChessPiece(std::move(other)),
	name(std::move(other.name)),
	movement(std::move(other.movement))
{
	std::cout << "Move constructing Pawn.\n";
}

void swapObjects(Pawn& left, Pawn& right)
{
	std::swap(left.name, right.name);
	std::swap(left.movement, right.movement);
}

Pawn& Pawn::operator=(Pawn other)
{
	std::cout << "Running copy and swap idiom in Pawn.\n";
	ChessPiece::operator=(other);
	swapObjects(*this, other);
	return *this;
}

void Pawn::movePawn()
{
	movement->move();
}

Pawn::~Pawn()
{
	std::cout << "Destructing Pawn.\n";
}
