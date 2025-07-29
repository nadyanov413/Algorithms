#include "node.h"
#include <iostream>

class Stack{
    public:

    Node* top;
    
    bool isEmpty(){
        return top == NULL;
    }
    int peek(){
        return top->val;
    }
    int remove(){
        Node* topNode = top;
        int value = top->val;
        top = top->next;
        delete topNode;
        return value;
    }
    void add(int value){
        Node* newNode = new Node(value);
        top->next = newNode;
        top = newNode;
    }

};