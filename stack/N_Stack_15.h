#include "node.h"
#include <iostream>

class Stack{
    Node* top = NULL;

    bool isEmpty(){
        return top == NULL;
    }
    int peek(){
        return top->val;
    }
    int pop(){
        Node* topNode = top;
        int output = top->val;
        top = top->next;
        delete topNode;
        return output;
    }
    int push(int value){
        Node* newNode = new Node(value);
        top->next = newNode;
        top = newNode;

    }

};