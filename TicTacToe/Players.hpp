//  Players.hpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#ifndef Players_hpp
#define Players_hpp

#include <string>
#include "Board.hpp"

using namespace std;

class Players{
private:
    string name;
    string symbol;
    int index1;
    int index2;
public:
    Players();
    Players(string newName);
    Players(string newName, int id1, int id2);
    void setPlayerName(string newName);
    string getPlayerName();
    void setSymbol(string newSymbol);
    string getSymbol();
    void Play(int id1, int id2);
    bool move(Board* &myBoard);
};

#endif /* Players_hpp */
