/*
    name: Sean Marshall - seanmarshall1999@live.co.uk
    desc: battleships object header file
    date: 10/11/2018
*/

#pragma once

class Battleship {

    private:
        int battleshipLength_;
        int battleshipYPos_;
        int battleshipXPos_;
        int battleshipXPos2_;
        int battleshipYPos2_;
        bool battleshipDamagedSpots_[]; //true == damaged

    public:

        Battleship();

        void setBattleShip(int battleshipLength, int battleshipXPos, int battleshipYPos
        int battleshipsXPos2, int battleshipYPos2_);
        
        int GetbattleshipLength() const;
        void SetbattleshipLength(int length);    
        int GetbattleshipYPos() const;
        void SetbattleshipYPos(int YPos);
        int GetbattleshipXPos() const;
        void SetbattleshipXPos(int XPos);  
        int GetbattleshipYPos2() const;
        void SetbattleshipYPos2(int YPos);
        int GetbattleshipXPos2() const;
        void SetbattleshipXPos2(int XPos);  
        bool GetbattleshipDamagedSpot(int damagedSpot) const;
        void SetbattleshipDamagedSpot(int DamagedSpot);
};