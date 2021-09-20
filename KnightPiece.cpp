#include "pch.h"
#include "KnightPiece.h"
#include "KnightMovement.h"
#include <iostream>

Knight::Knight(std::string color)
	: ChessPiece(color),
	name("Knight"),
	movement(std::make_shared<KnightMovement>())
{
	std::cout << "Constructing Knight.\n";
}

Knight::Knight(const Knight& other)
	: ChessPiece(other),
	name(other.name),
	movement(other.movement)
{
	std::cout << "Copy constructing Knight.\n";
}

Knight::Knight(Knight&& other) noexcept
	: ChessPiece(std::move(other)),
	name(std::move(other.name)),
	movement(std::move(other.movement))
{
	std::cout << "Move constructing Knight.\n";
}

void swapObjects(Knight& left, Knight& right)
{
	std::swap(left.name, right.name);
	std::swap(left.movement, right.movement);
}

Knight& Knight::operator=(Knight other)
{
	std::cout << "Running copy and swap idiom in Knight.\n";
	ChessPiece::operator=(other);
	swapObjects(*this, other);
	return *this;
}

void Knight::moveKnight()
{
	movement->move();
}

Knight::~Knight()
{
	std::cout << "Destructing Knight.\n";
}

