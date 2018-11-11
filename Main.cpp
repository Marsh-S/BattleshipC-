/*
    desc: battleships game main.cpp
*/

#include <iostream>
#include <string>
#include "Battleship.h"

void setP1Battleships();
void setP2Battleships();
void P1Turn();
void P2Turn();
void initilizeBoard();

Battleship P1Carrier();
Battleship P2Carrier();
Battleship P1Battleship();
Battleship P2Battleship();
Battleship P1Cruiser();
Battleship P2Cruiser();
Battleship P1Submarine();
Battleship P2Submarine();
Battleship P1Destroyer();
Battleship P2Destroyer();

int main {
     
     //Setup battleship positions
     setP1Battleships();
     setP2Battleships();
     bool isPlayer1Turn = true; //true = player1 turn; false = player2;
     std::cout << "Start game" << std::endl;
     //initilize P1board
     int P1board[10][10];
     int *P1board = initilizeBoard(int board[]); 
     //intilize P2board

     initilizeBoard(); 
     if (isPlayer1Turn) 
         P1Turn();
     else 
         P2Turn();
     return 0;
}

void setP1Battleships() {
//set player1 battleships
     int xpos1;
     int xpos2;
     int ypos1;
     int ypos2;
     std::cout << "Player 1" << std::endl;
     std::cout << "Please enter the X and Y coordinates for 5 space carrier boat seperated by a space" << std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P1Carrier.setBattleship(5, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 4 space battleship" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P1Battleship.setBattleship(4, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 3 space cruiser" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P1Cruiser.setBattleship(3, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 3 space submarine" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P1Submarine.setBattleship(3, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 2 space destroyer" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P1Destroyer.setBattleship(2, xpos1, ypos2, xpos1, xpos2);
}

void setP2Battleships() {
//set player 2 battleships
     std::cout << "Player 2" << std::endl;
     std::cout << "Please enter the X and Y coordinates for 5 space carrier boat seperated by a space" << std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P2Carrier.setBattleship(5, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 4 space battleship" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P2Battleship.setBattleship(4, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 3 space cruiser" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P2Cruiser.setBattleship(3, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 3 space submarine" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P2Submarine.setBattleship(3, xpos1, ypos2, xpos1, xpos2);

     std::cout << "X and Y coordinates for 2 space destroyer" std::endl;
     std::cout << "Please enter the second x and y positions" std::endl;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     std::cin >> xpos1; 
     std::cin >> ypos2;
     P2Destroyer.setBattleship(2, xpos1, ypos2, xpos1, xpos2);
}

void P1Turn() {
     int shotXPos;
     int shotYPos;
     std::cout << "Player 1's turn" << std::endl;
     std::cout << "Enter an x and y coordinate to fire at" << std::endl;
     std::cin >> shotXPos;
     std::cin >> shotYPos;


}

void P2Turn() {
     std::cout << "Player 2's turn" << std::endl;

}

void initilizeBoard(int board[]) {
     if (P1Cruiser.GetXPos1() == P1Cruiser.GetXPos2()) {
         if (P1Cruiser.GetYPos1() < P1Cruiser.GetYPos2()) {
             for (int i = 0; i < 51; i += 10)
                board[P1Cruiser.GetXPos1()][P1Cruiser.GetYPos1() - i] = 1;
         }
         else {
             for (int i = 0; i < 51; i += 10)
                board[P1.GetXPos1()][P1.GetYPos1() + i] = 1;
         }
     }
}