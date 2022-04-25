#pragma once

#include "KingNode.hpp"
#include "PieceNode.hpp" 
#include <iostream> 

class RedKing : public King 
{ 
public:
	RedKing(PieceNode &p) : King(p) {}   

	std::string kingMove() {
		std::cout << "Red King has moved" << std::endl;
	}


};
