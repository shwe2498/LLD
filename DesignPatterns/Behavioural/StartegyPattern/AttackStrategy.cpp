//
//  AttackStrategy.cpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#include "AttackStrategy.hpp"
#include <iostream>
#include <string>

using namespace std;

void AttackStrategy::play(string name){
    cout<<name + " will play in attack mode!!!"<<endl;
}
