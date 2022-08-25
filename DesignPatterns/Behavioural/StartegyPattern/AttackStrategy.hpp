//
//  AttackStrategy.hpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#ifndef AttackStrategy_hpp
#define AttackStrategy_hpp

#include <stdio.h>
#include "TeamStrategy.hpp"

class AttackStrategy : public TeamStrategy{
    void play(string name);
};

#endif /* AttackStrategy_hpp */
