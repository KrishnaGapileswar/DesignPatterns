# DesignPatterns
Simple C++ code of various Design Patterns

# Strategy Pattern:
Let's us choose different algorithm/behavior for differnet objects at run time independently of the client. Implemented with a Pawn and Knight movement analogy in Chess game.

MovementBehavior is the interface for movement of Chess pieces. PawnPiece and KnightPiece inherit from ChessPiece. PawnPiece and KnightPiece contain MovementBehavior to dynamically set the movement type. PawnMovement and KnightMovement define the corresponding movement of pieces.
