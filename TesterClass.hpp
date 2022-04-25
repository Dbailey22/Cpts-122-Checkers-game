//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "RedPiece.hpp"
#include "BluePiece.hpp"
#include "Board.hpp"
using std::cout;
using std::endl;

class testClass
{
public:
	//Function : drag and drop test
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
	//test description: testing drag and drop	
	void test1(); 


	//Function : die test
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
	//test description:testing if piece can die
	void test2();

	//Function : king test
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
	//test description: testing if piece can turn into king
	void test3();

	//Function : print the whole board test
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
	//test description: full board
	void test4();

	//Function : print the menu test
//	Date Created : 07 - 25
//	Date Last modified : 07 - 30
	//test description: print menu 
	bool test5();


};
