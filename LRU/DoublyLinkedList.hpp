//
//  DoublyLinkedList.hpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include <stdio.h>
#include "Node.hpp"

class DoublyLinkedList{
    Node* head;
    Node* tail;
    
    inline bool isEmpty() { return tail == nullptr; }
    
public:
    DoublyLinkedList();
    Node* getHead();
    Node* getTail();
    void setHead(Node* h);
    void setTail(Node* t);
    
    Node* addNodeToHead(int key, int value);
    void moveNodeToHead(Node* node);
    void removeTailNode();
};

#endif /* DoublyLinkedList_hpp */
