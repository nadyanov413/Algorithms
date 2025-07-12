#include "node.h"
#include <iostream>

class Queue{
    Node* first = NULL;
    Node* last = NULL;

    public:
    bool isEmpty(){
        return first == NULL;
    }

    int peek(){
        return first->val;
    }
    int pop(){
        Node* firstNode = first;
        int value = first->val;
        if(first == last){
            first = NULL;
            last = NULL;
        }
        else{
            first = first->next;
        }
        delete firstNode;
        return value;
    }
    void add(int value){
        Node* newNode = new Node(value);
        if(isEmpty()){
            first = newNode;
            last = newNode;
        }
        else{
            last->next = newNode;
            last = newNode;
        }

    }
};