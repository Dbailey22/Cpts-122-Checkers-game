#pragma once


#include "KingNode.hpp"
#include "PieceNode.hpp" 
#include <iostream>

class BlueKing : public King
{
	BlueKing(PieceNode& p) : King(p) {}


	std::string kingMove() {
		std::cout << "Blue King has moved" << std::endl; 
	}



};
