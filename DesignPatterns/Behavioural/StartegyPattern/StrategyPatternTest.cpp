#include <iostream>
#include "Team.hpp"
#include "TeamGermany.hpp"
#include "TeamArgentina.hpp"
#include "TeamStrategy.hpp"
#include "AttackStrategy.hpp"
#include "DefendStrategy.hpp"

int main(int argc, const char * argv[]) {
    Team *teamGermany = new TeamGermany();
    Team *teamArgentina = new TeamArgentina();
    
    //Strategies
    TeamStrategy *attack = new AttackStrategy();
    TeamStrategy *defend = new DefendStrategy();
    
    //Germany starts with defensive mode.
    //Argentina starts with attack mode.
    teamGermany->setTeamStrategy(defend);
    teamArgentina->setTeamStrategy(attack);
    
    teamGermany->setTeamName("Germany");
    teamArgentina->setTeamName("Argentina");
    
    teamGermany->teamInfo();
    teamGermany->playGame();
    
    teamArgentina->teamInfo();
    teamArgentina->playGame();
    
    cout<<endl<<"After Half Time!!!!"<<endl;
    cout<<endl;
    
    teamGermany->setTeamStrategy(attack);
    teamArgentina->setTeamStrategy(defend);
    
    teamGermany->teamInfo();
    teamGermany->playGame();
    
    teamArgentina->teamInfo();
    teamArgentina->playGame();
    return 0;
}
