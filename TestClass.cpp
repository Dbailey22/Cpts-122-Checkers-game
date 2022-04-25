//Programmers: Aaron, Aryan, Daniel, Ella
//Class : CptS 122, Summer 2021
//Programming Assignment : PA 8
//Date : July 30, 2021
//Description : This program is a digital game of checkers.
#include "TesterClass.hpp"

void testClass::test1() {
	sf::RenderWindow window(sf::VideoMode(800, 200), "Checkers Test 1!");

	Square s1(100, 100, sf::Color::White, sf::Vector2f(100, 0));
	//Square s2(100, 100, sf::Color::Magenta, sf::Vector2f(200, 0));
	Square s3(100, 100, sf::Color::White, sf::Vector2f(300, 0));
	//Square s4(100, 100, sf::Color::Magenta, sf::Vector2f(400, 0));
	Square s5(100, 100, sf::Color::White, sf::Vector2f(500, 0));
	//Square s6(100, 100, sf::Color::Magenta, sf::Vector2f(600, 0));
	Square s7(100, 100, sf::Color::White, sf::Vector2f(700, 0));
	//row 2
	Square s8(100, 100, sf::Color::White, sf::Vector2f(0, 100));
	Square s9(100, 100, sf::Color::White, sf::Vector2f(200, 100));
	Square s10(100, 100, sf::Color::White, sf::Vector2f(400, 100));
	Square s12(100, 100, sf::Color::White, sf::Vector2f(600, 100));

	bool isMove = false;
	float dx = 0, dy = 0;
	int n = 0;

	PieceNode* pieces[2];
	//sf::Texture t1;
	//t1.loadFromFile("checkers_PNG17.png");
	//all red pieces on board!
	RedPiece test0(50.0, sf::Color::Red, sf::Vector2f(100, 0));
	pieces[0] = &test0;
	RedPiece test1(50.0, sf::Color::Red, sf::Vector2f(300, 0));
	pieces[1] = &test1;

	while (window.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(window);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();


			//////drag and drop??///
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.key.code == sf::Mouse::Left) {
					for (int i = 0; i < 2; i++) {
						if (pieces[i]->getGlobalBounds().contains(pos.x, pos.y)) {
							isMove = true;
							n = i;
							dx = pos.x - pieces[i]->getPosition().x;
							dy = pos.y - pieces[i]->getPosition().y;
						}
					}
				}
			}


			if (event.type == sf::Event::MouseButtonReleased) {
				if (event.key.code == sf::Mouse::Left) {
					isMove = false;
				}
			}

			if (isMove == true) {
				pieces[n]->setPosition(pos.x - dx, pos.y - dy);
			}

			window.clear();

			//window.draw(s);
			window.draw(s1);
			//window.draw(s2);
			window.draw(s3);
			//window.draw(s4);
			window.draw(s5);
			//window.draw(s6);
			window.draw(s7);
			window.draw(s8);
			window.draw(s9);
			window.draw(s10);
			window.draw(s12);


			for (int k = 0; k < 2; k++)
				window.draw(*pieces[k]);

			window.display();
		}

	}


}

void testClass::test2() {
	sf::RenderWindow window(sf::VideoMode(800, 200), "Checkers Test 2!");

	Square s1(100, 100, sf::Color::White, sf::Vector2f(100, 0));
	//Square s2(100, 100, sf::Color::Magenta, sf::Vector2f(200, 0));
	Square s3(100, 100, sf::Color::White, sf::Vector2f(300, 0));
	//Square s4(100, 100, sf::Color::Magenta, sf::Vector2f(400, 0));
	Square s5(100, 100, sf::Color::White, sf::Vector2f(500, 0));
	//Square s6(100, 100, sf::Color::Magenta, sf::Vector2f(600, 0));
	Square s7(100, 100, sf::Color::White, sf::Vector2f(700, 0));
	//row 2
	Square s8(100, 100, sf::Color::White, sf::Vector2f(0, 100));
	Square s9(100, 100, sf::Color::White, sf::Vector2f(200, 100));
	Square s10(100, 100, sf::Color::White, sf::Vector2f(400, 100));
	Square s12(100, 100, sf::Color::White, sf::Vector2f(600, 100));

	bool isMove = false;
	float dx = 0, dy = 0;
	int n = 0;

	PieceNode* pieces[2];
	//sf::Texture t1;
	//t1.loadFromFile("checkers_PNG17.png");
	//all red pieces on board!
	RedPiece test0(50.0, sf::Color::Red, sf::Vector2f(100, 0));
	pieces[0] = &test0;
	RedPiece test1(50.0, sf::Color::Red, sf::Vector2f(300, 0));
	pieces[1] = &test1;

	while (window.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(window);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();


			//////drag and drop??///
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.key.code == sf::Mouse::Left) {
					for (int i = 0; i < 2; i++) {
						if (pieces[i]->getGlobalBounds().contains(pos.x, pos.y)) {
							isMove = true;
							n = i;
							dx = pos.x - pieces[i]->getPosition().x;
							dy = pos.y - pieces[i]->getPosition().y;
						}
					}
				}
			}
			//piece die
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.key.code == sf::Mouse::Right)
				{
					for (int i = 0; i < 24; i++)
					{
						pieces[n]->setFillColor(sf::Color::Transparent);
						pieces[n]->setOutlineColor(sf::Color::Transparent);
					}
				}
			}

			if (event.type == sf::Event::MouseButtonReleased) {
				if (event.key.code == sf::Mouse::Left) {
					isMove = false;
				}
			}

			if (isMove == true) {
				pieces[n]->setPosition(pos.x - dx, pos.y - dy);
			}

			window.clear();

			//window.draw(s);
			window.draw(s1);
			//window.draw(s2);
			window.draw(s3);
			//window.draw(s4);
			window.draw(s5);
			//window.draw(s6);
			window.draw(s7);
			window.draw(s8);
			window.draw(s9);
			window.draw(s10);
			window.draw(s12);


			for (int k = 0; k < 2; k++)
				window.draw(*pieces[k]);

			window.display();
		}

	}


}


void testClass::test3() {
	sf::RenderWindow window(sf::VideoMode(800, 200), "Checkers Test 3!");

	Square s1(100, 100, sf::Color::White, sf::Vector2f(100, 0));
	//Square s2(100, 100, sf::Color::Magenta, sf::Vector2f(200, 0));
	Square s3(100, 100, sf::Color::White, sf::Vector2f(300, 0));
	//Square s4(100, 100, sf::Color::Magenta, sf::Vector2f(400, 0));
	Square s5(100, 100, sf::Color::White, sf::Vector2f(500, 0));
	//Square s6(100, 100, sf::Color::Magenta, sf::Vector2f(600, 0));
	Square s7(100, 100, sf::Color::White, sf::Vector2f(700, 0));
	//row 2
	Square s8(100, 100, sf::Color::White, sf::Vector2f(0, 100));
	Square s9(100, 100, sf::Color::White, sf::Vector2f(200, 100));
	Square s10(100, 100, sf::Color::White, sf::Vector2f(400, 100));
	Square s12(100, 100, sf::Color::White, sf::Vector2f(600, 100));

	bool isMove = false;
	float dx = 0, dy = 0;
	int n = 0;

	PieceNode* pieces[2];
	//sf::Texture t1;
	//t1.loadFromFile("checkers_PNG17.png");
	//all red pieces on board!
	RedPiece test0(50.0, sf::Color::Red, sf::Vector2f(100, 0));
	pieces[0] = &test0;
	RedPiece test1(50.0, sf::Color::Red, sf::Vector2f(300, 0));
	pieces[1] = &test1;

	while (window.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(window);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();


			//////drag and drop??///
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.key.code == sf::Mouse::Left) {
					for (int i = 0; i < 2; i++) {
						if (pieces[i]->getGlobalBounds().contains(pos.x, pos.y)) {
							isMove = true;
							n = i;
							dx = pos.x - pieces[i]->getPosition().x;
							dy = pos.y - pieces[i]->getPosition().y;
						}
					}
				}
			}
			//piece die
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.key.code == sf::Mouse::Right)
				{
					for (int i = 0; i < 24; i++)
					{
						pieces[n]->setFillColor(sf::Color::Transparent);
						pieces[n]->setOutlineColor(sf::Color::Transparent);
					}
				}
			}

			//king 
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Space)
				{
					for (int i = 0; i < 24; i++)
					{
						pieces[n]->setOutlineThickness(10);
						pieces[n]->setOutlineColor(sf::Color::Green);
					}
				}
			}

			if (event.type == sf::Event::MouseButtonReleased) {
				if (event.key.code == sf::Mouse::Left) {
					isMove = false;
				}
			}

			if (isMove == true) {
				pieces[n]->setPosition(pos.x - dx, pos.y - dy);
			}

			window.clear();

			//window.draw(s);
			window.draw(s1);
			//window.draw(s2);
			window.draw(s3);
			//window.draw(s4);
			window.draw(s5);
			//window.draw(s6);
			window.draw(s7);
			window.draw(s8);
			window.draw(s9);
			window.draw(s10);
			window.draw(s12);


			for (int k = 0; k < 2; k++)
				window.draw(*pieces[k]);

			window.display();
		}

	}


}

void testClass::test4() {
	sf::RenderWindow window(sf::VideoMode(800, 800), "Checkers!");
	system("dir");
	//sf::Image pt1;  
	//pt1.loadFromFile("red.jpg");
	PieceNode* pieces[24];
	//sf::Texture t1;
	//t1.loadFromFile("checkers_PNG17.png");
	//all red pieces on board!
	RedPiece test0(50.0, sf::Color::Red, sf::Vector2f(100, 0));
	pieces[0] = &test0;
	RedPiece test1(50.0, sf::Color::Red, sf::Vector2f(300, 0));
	pieces[1] = &test1;
	RedPiece test2(50.0, sf::Color::Red, sf::Vector2f(500, 0));
	pieces[2] = &test2;
	RedPiece test3(50.0, sf::Color::Red, sf::Vector2f(700, 0));
	pieces[3] = &test3;
	RedPiece test4(50.0, sf::Color::Red, sf::Vector2f(0, 100));
	pieces[4] = &test4;
	RedPiece test5(50.0, sf::Color::Red, sf::Vector2f(200, 100));
	pieces[5] = &test5;
	RedPiece test6(50.0, sf::Color::Red, sf::Vector2f(400, 100));
	pieces[6] = &test6;
	RedPiece test7(50.0, sf::Color::Red, sf::Vector2f(600, 100));
	pieces[7] = &test7;
	RedPiece test8(50.0, sf::Color::Red, sf::Vector2f(100, 200));
	pieces[8] = &test8;
	RedPiece test9(50.0, sf::Color::Red, sf::Vector2f(300, 200));
	pieces[9] = &test9;
	RedPiece test10(50.0, sf::Color::Red, sf::Vector2f(500, 200));
	pieces[10] = &test10;
	RedPiece test11(50.0, sf::Color::Red, sf::Vector2f(700, 200));
	pieces[11] = &test11;
	//All  pieces on board!
	BluePiece test12(50.0, sf::Color::Blue, sf::Vector2f(0, 700));
	pieces[12] = &test12;
	BluePiece test13(50.0, sf::Color::Blue, sf::Vector2f(200, 700));
	pieces[13] = &test13;
	BluePiece test14(50.0, sf::Color::Blue, sf::Vector2f(400, 700));
	pieces[14] = &test14;
	BluePiece test15(50.0, sf::Color::Blue, sf::Vector2f(600, 700));
	pieces[15] = &test15;
	BluePiece test16(50.0, sf::Color::Blue, sf::Vector2f(100, 600));
	pieces[16] = &test16;
	BluePiece test17(50.0, sf::Color::Blue, sf::Vector2f(300, 600));
	pieces[17] = &test17;
	BluePiece test18(50.0, sf::Color::Blue, sf::Vector2f(500, 600));
	pieces[18] = &test18;
	BluePiece test19(50.0, sf::Color::Blue, sf::Vector2f(700, 600));
	pieces[19] = &test19;
	BluePiece test20(50.0, sf::Color::Blue, sf::Vector2f(0, 500));
	pieces[20] = &test20;
	BluePiece test21(50.0, sf::Color::Blue, sf::Vector2f(200, 500));
	pieces[21] = &test21;
	BluePiece test22(50.0, sf::Color::Blue, sf::Vector2f(400, 500));
	pieces[22] = &test22;
	BluePiece test23(50.0, sf::Color::Blue, sf::Vector2f(600, 500));
	pieces[23] = &test23;
	

	//Background
	//row 1
	Square s1(100, 100, sf::Color::White, sf::Vector2f(100, 0));
	Square s3(100, 100, sf::Color::White, sf::Vector2f(300, 0));
	Square s5(100, 100, sf::Color::White, sf::Vector2f(500, 0));
	Square s7(100, 100, sf::Color::White, sf::Vector2f(700, 0));
	//row 2
	Square s8(100, 100, sf::Color::White, sf::Vector2f(0, 100));
	Square s9(100, 100, sf::Color::White, sf::Vector2f(200, 100));
	Square s10(100, 100, sf::Color::White, sf::Vector2f(400, 100));
	Square s12(100, 100, sf::Color::White, sf::Vector2f(600, 100));
	//row 3
	Square s13(100, 100, sf::Color::White, sf::Vector2f(100, 200));
	Square s14(100, 100, sf::Color::White, sf::Vector2f(300, 200));
	Square s15(100, 100, sf::Color::White, sf::Vector2f(500, 200));
	Square s16(100, 100, sf::Color::White, sf::Vector2f(700, 200));
	//row 4
	Square s17(100, 100, sf::Color::White, sf::Vector2f(0, 300));
	Square s18(100, 100, sf::Color::White, sf::Vector2f(200, 300));
	Square s19(100, 100, sf::Color::White, sf::Vector2f(400, 300));
	Square s20(100, 100, sf::Color::White, sf::Vector2f(600, 300));
	//row 5
	Square s21(100, 100, sf::Color::White, sf::Vector2f(100, 400));
	Square s22(100, 100, sf::Color::White, sf::Vector2f(300, 400));
	Square s23(100, 100, sf::Color::White, sf::Vector2f(500, 400));
	Square s24(100, 100, sf::Color::White, sf::Vector2f(700, 400));
	//row 6
	Square s25(100, 100, sf::Color::White, sf::Vector2f(0, 500));
	Square s26(100, 100, sf::Color::White, sf::Vector2f(200, 500));
	Square s27(100, 100, sf::Color::White, sf::Vector2f(400, 500));
	Square s28(100, 100, sf::Color::White, sf::Vector2f(600, 500));
	//row 7
	Square s29(100, 100, sf::Color::White, sf::Vector2f(100, 600));
	Square s30(100, 100, sf::Color::White, sf::Vector2f(300, 600));
	Square s31(100, 100, sf::Color::White, sf::Vector2f(500, 600));
	Square s32(100, 100, sf::Color::White, sf::Vector2f(700, 600));
	//row 8
	Square s33(100, 100, sf::Color::White, sf::Vector2f(0, 700));
	Square s34(100, 100, sf::Color::White, sf::Vector2f(200, 700));
	Square s35(100, 100, sf::Color::White, sf::Vector2f(400, 700));
	Square s36(100, 100, sf::Color::White, sf::Vector2f(600, 700));


	bool isMove = false;
	float dx = 0, dy = 0;
	int n = 0;

	while (window.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(window);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();


			//////drag and drop///
			

			window.clear();

			window.draw(s1);
			//window.draw(s2);
			window.draw(s3);
			//window.draw(s4);
			window.draw(s5);
			//window.draw(s6);
			window.draw(s7);
			window.draw(s8);
			window.draw(s9);
			window.draw(s10);
			window.draw(s12);
			window.draw(s13);
			window.draw(s14);
			window.draw(s15);
			window.draw(s16);
			window.draw(s17);
			window.draw(s18);
			window.draw(s19);
			window.draw(s20);
			window.draw(s21);
			window.draw(s22);
			window.draw(s23);
			window.draw(s24);
			window.draw(s25);
			window.draw(s26);
			window.draw(s27);
			window.draw(s28);
			window.draw(s29);
			window.draw(s30);
			window.draw(s31);
			window.draw(s32);
			window.draw(s33);
			window.draw(s34);
			window.draw(s35);
			window.draw(s36);

			for (int k = 0; k < 24; k++)
				window.draw(*pieces[k]);

			window.display();
		}

	}


}

bool testClass::test5() {
	bool success = false;
	cout << "Welcome to checkers!\n\n" << endl;

	cout << "\n\nGame Rules:" << endl;
	cout << "The two players alternate turns and can only move their own pieces. " << endl;
	cout << "Each turn involves the moving of one piece, which can consist of a " << endl;
	cout << "piece moving forward to a diagonally adjacent square that is unoccupied, " << endl;
	cout << "or jumping forward over an occupied diagonally adjacent square, " << endl;
	cout << "provided that the square beyond is also empty. " << endl;
	cout << "If a player jumps over their opponent’s piece, they have successfully " << endl;
	cout << "captured that pieceand it is removed from the game. " << endl;
	cout << "Each piece is initially referred to as a man, but if it reaches the " << endl;
	cout << "furthest side of the board it becomes a king. " << endl;
	cout << "Men may only move diagonally forward, but kings can move diagonally " << endl;
	cout << "forwards as well as backwards. Multiple pieces maybe jumped by both " << endl;
	cout << "men and kings provided that there are successive unoccupied squares " << endl;
	cout << "beyond each piece that is jumped." << endl;

	cout << "\n\nControls:" << endl;
	cout << "To play the game you will need to drag and drop the piece to the correct position on the board\n" << endl;
	cout << "Once you have jumped a piece you will then remove the piece that was jumped by left clicking on it and then right clicking on it\n" << endl;
	cout << "If a piece makes it to the opposite side of the board you will be allowed to make it a king! You do this by clicking on the piece and clicking space\n" << endl;

	success = true;

	return success;
}