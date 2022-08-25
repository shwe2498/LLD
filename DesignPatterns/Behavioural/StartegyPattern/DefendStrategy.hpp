//
//  DefendStrategy.hpp
//  StrategyPattern
//
//  Created by Shweta Kirave on 25/08/22.
//

#ifndef DefendStrategy_hpp
#define DefendStrategy_hpp

#include <stdio.h>
#include "TeamStrategy.hpp"

class DefendStrategy : public TeamStrategy{
    void play(string name);
};
#endif /* DefendStrategy_hpp */
