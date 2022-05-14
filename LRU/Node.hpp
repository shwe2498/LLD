//
//  Node.hpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
class Node{
    int key;
    int value;
    Node* next;
    Node* prev;
public:
    Node();
    Node(int k, int v);
    Node* getNext();
    Node* getPrev();
    int getKey();
    int getValue();
    void setNext(Node* n);
    void setPrev(Node* p);
    void setKey(int k);
    void setValue(int v);
};

#endif /* Node_hpp */
