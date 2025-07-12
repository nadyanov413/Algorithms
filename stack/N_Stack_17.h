#include "node.h"
#include <iostream>

class Stack{
    Node* top;
    public:
    
    bool isEmpty(){
        return top == NULL;
    }

    int peek(){
        return top->val;
    }
    int pop(){
        Node* topNode = top;
        top = top->next;
        int value = top->val;
        delete topNode;
        return value;
    }
    void push(int value){
        Node* newNode = new Node(value);
        top->next = newNode;
        top = newNode;

    }


};