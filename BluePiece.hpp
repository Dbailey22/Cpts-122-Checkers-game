//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#pragma once
//////Function: Blue Checker Piece  Class

//////Description: Used for creating the classes of blue team
//////Input parameters : Radius, Color, Pos
//////Returns: a checker piece of team blue, and size, at any positon 
#include "PieceNode.hpp"
#include <iostream>  

class BluePiece : public PieceNode
{
public: 
	//Function : Blue Piece
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
//	Description : Constructs a piece base
//	Input parameters : radius, Color, Position
	//pre: PieceNode exists
	BluePiece(const float& radius, const sf::Color& color, const sf::Vector2f& pos) : PieceNode(radius, color, pos)
	{
		std::cout << "Blue Piece Created" << std::endl;
	}

	//virtual move function defined for the  blue  piece

//////Function: move()
//////Date Created : 07 - 25
//////Date Last modified : 07 - 30
//////Description : Validates checkers move, prints message
//////Returns : Bool

	bool move() {
		bool success = true; 
		std::cout << "Blue Piece has Moved" << std::endl;
		return success; 
	}



};
