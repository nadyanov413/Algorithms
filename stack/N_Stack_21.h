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
            int output = top->val;
            top = top->next;
            delete topNode;
            return output;
        }
        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            top = newNode;
        }


};