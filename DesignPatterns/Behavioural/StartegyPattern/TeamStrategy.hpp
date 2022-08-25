//
//  TeamStrategy.hpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#ifndef TeamStrategy_hpp
#define TeamStrategy_hpp

#include <stdio.h>
#include <string>

using namespace std;

class TeamStrategy {
public:
    virtual void play(string name) = 0;
};
#endif /* TeamStrategy_hpp */
