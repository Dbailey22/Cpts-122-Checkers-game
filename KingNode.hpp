#pragma once

#include "PieceNode.hpp"

class King : public PieceNode
{

public:
	King(PieceNode& p) : PieceNode(p) {
		p.setOutlineThickness(10);
		p.setOutlineColor(sf::Color::Green); 
	}  

	~King(); 

	//virtual move
	virtual std::string kingMove() = 0;  

private:



};

