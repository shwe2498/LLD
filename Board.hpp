//  Board.hpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#ifndef Board_hpp
#define Board_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Board{
private:
    vector<vector<string>> board;
public:
    Board();
    void resetBoard();
    bool updateBoard(string move, int index);
    void displayBoard();
    bool checkWin();
    bool checkTie();
};

#endif /* Board_hpp */
