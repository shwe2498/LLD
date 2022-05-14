//
//  Node.cpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#include "Node.hpp"

Node::Node():key(0),value(0),next(nullptr),prev(nullptr)
{
    
}
Node::Node(int k, int v):key(k), value(v), next(nullptr), prev(nullptr)
{
    
}
Node* Node::getNext(){
    return next;
}
Node* Node::getPrev(){
    return prev;
}
int Node::getKey(){
    return key;
}
int Node::getValue(){
    return value;
}
void Node::setNext(Node* n){
    next = n;
}
void Node::setPrev(Node* p){
    prev = p;
}
void Node::setKey(int k){
    key = k;
}
void Node::setValue(int v){
    value = v;
}
