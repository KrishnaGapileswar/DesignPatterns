#include "pch.h"
#include "KnightPiece.h"
#include "PawnPiece.h"
#include <iostream>

int main()
{
  std::cout << "Strategy Pattern demo...\n\n";
	Knight k{ "White" };
	Pawn p{ "Black" };

	k.moveKnight();
	p.movePawn();

	Knight kCopy = k;
	Pawn pCopy = p;

	kCopy.moveKnight();
	pCopy.movePawn();

	k = kCopy;
	p = pCopy;

	k.moveKnight();
	p.movePawn();
}
