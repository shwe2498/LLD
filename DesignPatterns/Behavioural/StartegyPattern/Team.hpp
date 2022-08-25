//
//  Team.hpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#ifndef Team_hpp
#define Team_hpp

#include <stdio.h>
#include <string>
#include "TeamStrategy.hpp"

using namespace std;

class Team {
private:
    TeamStrategy* teamStrategy;
    string teamName;
    
public:
    virtual void teamInfo() = 0;
    virtual void playGame();
    string getTeamName();
    void setTeamName(string name);
    TeamStrategy* getTeamStrategy();
    void setTeamStrategy(TeamStrategy *tStrategy);
};

#endif /* Team_hpp */
