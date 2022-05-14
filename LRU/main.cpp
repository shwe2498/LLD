//
//  main.cpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#include <iostream>
#include "LRUCache.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, LRU Cache!!!\n";
    
    LRUCache cache(4);
    cache.put(1, 4);
    cache.put(2, 3);
    cache.put(3, 2);
    cout<<cache.get(1)<<endl;
    cache.put(4, 1);
    cache.put(5, 0);
    cache.put(6, 1);
    cout<<cache.get(1)<<endl;
    cout<<cache.get(2)<<endl;
    cout<<cache.get(3)<<endl;
    cout<<cache.get(4)<<endl;
    cout<<cache.get(5)<<endl;
    cout<<cache.get(6)<<endl;
    cout<<cache.get(3)<<endl;
    return 0;
}
