//  TicTakToeGame.hpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#ifndef TicTakToeGame_hpp
#define TicTakToeGame_hpp

#include "Board.hpp"
#include "Players.hpp"
#include <vector>

using namespace std;

class TicTakToeGame{
private:
    Board *board;
    vector<Players> players;
    bool hasWon;
    bool isTie;
public:
    TicTakToeGame();
    void PlayGame();
    ~TicTakToeGame();
private:
    void GetPlayersDetails();
};

#endif /* TicTakToeGame_hpp */
