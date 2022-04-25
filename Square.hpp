//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

#include "PieceNode.hpp"

//////Function: Create Square for board

//////Description: Used for creating the background/board in which the game is played on
//////Input parameters : None
//////Returns: Square of given size, of chosen color, at chosed location (top right corner)


class Square : public sf::RectangleShape
{
public:
	//Function : Square
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
//	Description : Constructs a Square
//	Input parameters : Length, Width, Color, Position
	Square(const float& length, const float& width, const sf::Color& color, const sf::Vector2f& pos) : sf::RectangleShape(sf::Vector2f(length, width)) {
		this->mRow = 0;
		this->mCol = 0;
		this->mOccupied = false;
		this->mPointer = nullptr; 

		this->setFillColor(color);
		sf::RectangleShape::setPosition(pos); 


	}
protected:
	int mRow;
	int mCol;
	bool mOccupied;
	PieceNode* mPointer;

};