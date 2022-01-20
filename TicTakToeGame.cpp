//  TicTakToeGame.cpp
//  TicTakToe
//
//  Created by Shweta Kirave on 19/01/22.

#include "TicTakToeGame.hpp"

TicTakToeGame::TicTakToeGame(){
    board = new Board();
    hasWon = false;
    isTie = false;
}

void TicTakToeGame::PlayGame(){
    GetPlayersDetails();
    
    char replay;
    do{
        string winner;
        do{
            hasWon = players[0].move(board);
            if(hasWon) winner = players[0].getPlayerName();
            
            if(!hasWon){
                hasWon = players[1].move(board);;
                if(hasWon) winner = players[1].getPlayerName();
            }
            if(!hasWon){
                isTie = board->checkTie();
            }
        }while(!hasWon && !isTie);
        
        if(hasWon) cout<<"Congratulations "<<winner<<"! You have Won."<<endl;
        if(!hasWon && isTie) cout<<"Snapppp...It's a Tie!"<<endl;
        
        cout<<"Do want to play again (yes\no)?"<<endl;
        cin>>replay;
        if(replay == 'y' || replay == 'Y') {
            board->resetBoard();
            hasWon = isTie = false;
        }
    }while(replay == 'y' || replay == 'Y');
}

TicTakToeGame::~TicTakToeGame(){
    if(board){
        delete board;
        board = nullptr;
    }
    if(!players.empty()){
        players.clear();
    }
    hasWon = false;
    isTie = false;
}

void TicTakToeGame::GetPlayersDetails(){
    string name, symbol;
    cout<<"Enter Player1 Name :: ";
    cin>>name;
    Players player1;
    player1.setPlayerName(name);
    do{
        cout<<"Enter Player1 Symbol (X/O):: ";
        cin>>symbol;
    }while(symbol != "X" && symbol != "O");
    player1.setSymbol(symbol);
    players.push_back(player1);
    
    cout<<"Enter Player2 Name :: ";
    cin>>name;
    Players player2;
    player2.setPlayerName(name);
    player2.setSymbol(player1.getSymbol() == "X" ? "O" : "X");
    players.push_back(player2);
}
