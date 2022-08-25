//
//  DefendStrategy.cpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#include "DefendStrategy.hpp"
#include <iostream>
#include <string>

using namespace std;

void DefendStrategy::play(string name){
    cout<<name + " will play in defensive mode!!!"<<endl;
}
