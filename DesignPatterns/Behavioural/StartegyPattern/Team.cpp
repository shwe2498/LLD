//
//  Team.cpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#include "Team.hpp"
using namespace std;

void Team::playGame(){
    teamStrategy->play(teamName);
}

string Team::getTeamName(){
    return teamName;
}

void Team::setTeamName(string name){
    teamName = name;
}

TeamStrategy* Team::getTeamStrategy(){
    return teamStrategy;
}

void Team::setTeamStrategy(TeamStrategy *tStrategy){
    teamStrategy = tStrategy;
}
