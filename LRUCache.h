//
//  LRUCache.h
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#ifndef LRUCache_h
#define LRUCache_h

#include <map>
#include "Node.hpp"
#include "DoublyLinkedList.hpp"

using namespace std;

class LRUCache{
    int capacity;
    int size;
    DoublyLinkedList *pDLL;
    map<int, Node*> mMapNodeKey;
    inline bool isFull(){ return size == capacity; }
    
public:
    LRUCache(int capacity);
    ~LRUCache();
    int get(int key);
    void put(int key, int value);
};

#endif /* LRUCache_h */
