//
//  LRUCache.cpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#include <stdio.h>
#include "LRUCache.h"
#include <iostream>
#include "Node.hpp"

using namespace std;

LRUCache::LRUCache(int capacity){
    this->capacity = capacity;
    this->size = 0;
    pDLL = new DoublyLinkedList();
    mMapNodeKey = map<int, Node*>();
}
int LRUCache::get(int key){
    int val = -1;
    if(mMapNodeKey.find(key) != mMapNodeKey.end()){
        val = mMapNodeKey[key]->getValue();
        pDLL->moveNodeToHead(mMapNodeKey[key]);
    }
    return val;
}
void LRUCache::put(int key, int value){
    if(mMapNodeKey.find(key) != mMapNodeKey.end()){
        mMapNodeKey[key]->setValue(value);
        pDLL->moveNodeToHead(mMapNodeKey[key]);
    }
    else{
        if(isFull()){
            mMapNodeKey.erase(pDLL->getTail()->getKey());
            pDLL->removeTailNode();
            size--;
        }
        Node* node = pDLL->addNodeToHead(key, value);
        size++;
        mMapNodeKey[key] = node;
    }
}

LRUCache::~LRUCache(){
    for(auto itr : mMapNodeKey)
        delete itr.second;
    delete pDLL;
}
