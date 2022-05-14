//
//  DoublyLinkedList.cpp
//  LRU
//
//  Created by Shweta Kirave on 14/05/22.
//

#include "DoublyLinkedList.hpp"

DoublyLinkedList::DoublyLinkedList():head(nullptr), tail(nullptr){
    
}
Node* DoublyLinkedList::getHead(){
    return head;
}
Node* DoublyLinkedList::getTail(){
    return tail;
}
void DoublyLinkedList::setHead(Node* h){
    head = h;
}
void DoublyLinkedList::setTail(Node* t){
    tail = t;
}

Node* DoublyLinkedList::addNodeToHead(int key, int value){
    Node* node = new Node(key, value);
    if(!head && !tail)
        head = tail = node;
    else{
        node->setNext(head);
        head->setPrev(node);
        setHead(node);
    }
    return node;
}
void DoublyLinkedList::moveNodeToHead(Node* node){
    if(head == node) return;
    if(tail == node){
        tail = tail->getPrev();
        tail->setNext(nullptr);
    }
    else{
        node->getPrev()->setNext(node->getNext());
        node->getNext()->setPrev(node->getPrev());
    }
    
    node->setNext(head);
    node->setPrev(nullptr);
    head->setPrev(node);
    head = node;
}
void DoublyLinkedList::removeTailNode(){
    if(isEmpty()) return;
    if(head == tail){
        delete tail;
        head = tail = nullptr;
    }
    else{
        Node* t = tail;
        setTail(tail->getPrev());
        tail->setNext(nullptr);
        delete t;
    }
}
