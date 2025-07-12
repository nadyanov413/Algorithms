#include "node.h"
#include <iostream>

class Queue{
    Node* first = NULL;
    Node* last = NULL;

    bool isEmpty(){
        return first == NULL;
    }
    int peek(){
        return first->val;
    }
    int remove(){
        Node* firstNode = first;
        int output = first->val;
        if(first == last){
            first = NULL;
            last = NULL;
        }else{
            first = first->next;
        }
    }
    void add(int value){
        Node* newNode = new Node(value);
        if(isEmpty()){
            first = newNode;
            last = newNode;
        }else{
            last->next = newNode;
            last = newNode;
        } 
    }

};