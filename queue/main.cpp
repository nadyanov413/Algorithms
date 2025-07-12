#include "queue.h"
#include <iostream>

using namespace std;

int main(){
    Queue queue;
    queue.add(3);
    cout<< queue.peek() << endl;
    queue.add(12);
    cout<< queue.peek() << endl;
    queue.add(8);
    cout << queue.peek() << endl;
    cout << queue.remove() << endl;
    cout << queue.remove() << endl;
    cout << queue.remove() << endl;

};
