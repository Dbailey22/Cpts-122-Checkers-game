//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#pragma once
//////Function: Red Checker Piece  Class

//////Description: Used for creating the classes of red team
//////Input parameters : Radius, Color, Pos
//////Returns: a checker piece of team red, and size, at any positon 

#include "PieceNode.hpp"
#include <iostream>

class RedPiece : public PieceNode 
{
public: 
	//Function : Red Piece
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
//	Description : Constructs a piece base
//	Input parameters : radius, Color, Position
	//pre: PieceNode exists
	RedPiece(const float& radius, const sf::Color& color, const sf::Vector2f& pos) : PieceNode(radius, color, pos)
	{
		std::cout << "Red Piece Created" << std::endl; 
	}


	//////Function: move()
//////Date Created : 07 - 25
//////Date Last modified : 07 - 30
//////Description : Validates checkers move, prints message
//////Returns : Bool

	//virtual move function defined for the red piece
	bool move() { 
		bool success = true;
		std::cout << "Red Piece has Moved" << std::endl; 

		return success;  
	}
		

		

};