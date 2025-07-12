#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    Stack stack;

    cout << "Stack is empty: " << stack.isEmpty() << endl;

    stack.push(4);
    stack.push(5);
    stack.push(10);
    stack.push(14);
    cout << stack.peek() << endl;
    stack.pop();
    cout << stack.peek() << endl;
    stack.pop();
    cout << stack.peek() << endl;
    stack.pop();
    cout << stack.peek() << endl;
    stack.pop();

    cout << "Hello World"<< endl;
}
