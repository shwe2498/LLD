//  Players.cpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#include "Players.hpp"

Players::Players(){
    name = " ";
    index1 = 0;
    index2 = 0;
    symbol = "X";
}

Players::Players(string newName){
    name = newName;
    symbol = "X";
}

Players::Players(string newName, int id1, int id2){
    name = newName;
    index1 = id1;
    index2 = id2;
    symbol = "X";
}

void Players::setPlayerName(string newName){
    name = newName;
}

string Players::getPlayerName(){
    return name;
}

void Players::setSymbol(string newSymbol){
    symbol = newSymbol;
}

string Players::getSymbol(){
    return symbol;
}

void Players::Play(int id1, int id2){
    index1 = id1;
    index2 = id2;
}

bool Players::move(Board* &myBoard){
    int pos;
    cout<<getPlayerName()<<", your move ::";
    cin>>pos;
    
    myBoard->updateBoard(getSymbol(), pos);
    myBoard->displayBoard();
    return myBoard->checkWin();
}
