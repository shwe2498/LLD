//  Board.cpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#include "Board.hpp"

Board::Board(){
    board.push_back({"1","2","3"});
    board.push_back({"4","5","6"});
    board.push_back({"7","8","9"});
}

void Board::resetBoard(){
    board.clear();
    board.push_back({"1","2","3"});
    board.push_back({"4","5","6"});
    board.push_back({"7","8","9"});
}

bool Board::updateBoard(string move, int index){
    int index1 = -1, index2 = -1;
    switch (index) {
        case 1:
            index1 = index2 = 0;
            break;
        case 2:
            index1 = 0; index2 = 1;
            break;
        case 3:
            index1 = 0; index2 = 2;
            break;
        case 4:
            index1 = 1; index2 = 0;
            break;
        case 5:
            index1 = 1; index2 = 1;
            break;
        case 6:
            index1 = 1; index2 = 2;
            break;
        case 7:
            index1 = 2; index2 = 0;
            break;
        case 8:
            index1 = 2; index2 = 1;
            break;
        case 9:
            index1 = 2; index2 = 2;
            break;
        default:
            cout<<"Please enter valid position (1 to 9)."<<endl;
            index1 = index2 = -1;
            break;
    }
    if(index1 >= 0 && index1 < 3 &&
       index2 >= 0 &&index2 < 3 &&
       board[index1][index2] != "X" &&
       board[index1][index2] != "O"){
        board[index1][index2] = move;
        return true;
    }
    return false;
}

void Board::displayBoard(){
    cout<<"------"<<endl;
    for(auto row : board){
        for(auto col : row){
            cout<<col<<"|";
        }
        cout<<endl;
        cout<<"------"<<endl;
    }
}

bool Board::checkWin(){
    //first row
    if(board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X") return true;
    if(board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O") return true;
    //second row
    if(board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X") return true;
    if(board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O") return true;
    //third row
    if(board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X") return true;
    if(board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O") return true;
    
    //first col
    if(board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X") return true;
    if(board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O") return true;
    //second col
    if(board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X") return true;
    if(board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O") return true;
    //third col
    if(board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X") return true;
    if(board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O") return true;
    
    //diagonals
    if(board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X") return true;
    if(board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X") return true;
    if(board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O") return true;
    if(board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O") return true;
    
    return false;
}

bool Board::checkTie(){
    int count = 1;
    for(auto row : board){
        for(auto col : row){
            if(col == to_string(count++)){
                return false;
            }
        }
    }
    return true;
}
