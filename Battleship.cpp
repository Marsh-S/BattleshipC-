/*
    name: Sean Marshall - seanmarshall1999@live.co.uk
    desc: battleships object header file
    date: 10/11/2018
*/        

#include "Battleship.h"
        
Battleship::Battleship() {
     battleshipLength_ = 2;
     battleshipXPos_ = 1;
     battleshipYPos_ = 1;
     battleshipXPos2_ = 2;
     battleshipYPos2_ = 2;
     for (int i = 0; i < battleshipLength_) {
        battleshipDamagedSpots_[i] = false;
     }
}

void Battleship::setBattleShip(int battleshipLength, int battleshipXPos, int battleshipYPos
    int battleshipXPos2, int battleshipYPos_2) {
     if (battleshipLength > 1 && battleshipLength < 6) 
         battleshipLength_ = battleshipLength;
     else
         battleshipLength_ = 2;
     battleshipXPos_ = battleshipXPos;
     battleshipYPos_ = battleshipXPos;
     battleshipXpos2_ = battleshipXPos2;
     battleshipYpos2_ = battleshipYPos2;
     
     for (int i = 0; i < battleshipLength_) {
        battleshipDamagedSpots_[i] = false;
     }
}

int Battleship::GetbattleshipLength() const {
     return battleshipLength_;
}

void Battleship::SetbattleshipLength(int length) {
     if (length > 1 && length < 6) 
         battleshipLength_ = length;
} 
int Battleship::GetbattleshipYPos() const { //x,y positions 1 start
     return battleshipYPos_;
}

void Battleship::SetbattleshipYPos(int YPos) {
     battleshipYPos_ = YPos;
}

int Battleship::GetbattleshipXPos() const { 
     return battleshipXPos_;
}

void Battleship::SetbattleshipXPos(int XPos) { //end
     battleshipXPos_ = XPos;
}

int Battleship::GetbattleshipYPos() const { //x,y posotions 2 start
     return battleshipYPos_2;
}

void Battleship::SetbattleshipYPos(int YPos) {
     battleshipYPos_ = YPos2;
}

int Battleship::GetbattleshipXPos() const {
     return battleshipXPos_2;
}

void Battleship::SetbattleshipXPos(int XPos) { //end
     battleshipXPos_ = XPos2;
}

bool Battleship::GetbattleshipDamagedSpot(int damagePos) const {
     return battleshipDamagedSpots_[damagePos];
}

void Battleship::SetbattleshipDamagedSpot(int DamagedSpot) {
     if (DamagedSpot > 1 && DamagedSpot < battleshipLength_)
        battleshipDamagedSpots_[DamagedSpot] = true;
}