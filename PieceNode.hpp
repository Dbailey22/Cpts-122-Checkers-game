//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#pragma once
#include <SFML/Graphics.hpp>


//////Function: Checker Piece Base Abstract Class

//////Description: Used for creating the classes of each team
//////Input parameters : Radius, Color, Pos
//////Returns: a checker piece of your chosen color, and size, at any positon 


class PieceNode : public sf::CircleShape
{
public:
	//Function : PieceNode
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
//	Description : Constructs a piece base
//	Input parameters : radius, Color, Position
	//pre: Circleshape exists
	PieceNode(const float& radius, const sf::Color& color, const sf::Vector2f& pos) : sf::CircleShape(radius) 
	{
		this->setFillColor(color);
		sf::CircleShape::setPosition(pos); 
	}
	
	//pure virtual move function, intended for validating the movement of each piece but we did not get that far into the 
	//development of the game. 

//////Function: move()
//////Date Created : 07 - 25
//////Date Last modified : 07 - 30
//////Description : Validates checkers move, prints message
//////Returns : Bool

	virtual bool move() = 0;   



};