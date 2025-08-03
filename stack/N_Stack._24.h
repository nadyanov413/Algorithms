#include "node.h"
#include <iostream>

class Stack{
    Node* top;
    bool isEmpty(){
        return top == NULL;
    }
    
    int peek(){
        return top->val;
    }
    int remove(){
        Node* topNode = top;
        int output = top->val;
        top = top->next;
        delete topNode;
        return output;

    }
};