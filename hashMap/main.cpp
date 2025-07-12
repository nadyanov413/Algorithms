#include <iostream>
#include <functional>
#include "N_hashMap.h"

int main(){
    HashMap hashMap;
    string msg1 = "hello";
    string msg2 = "Library";
    string msg3 = "Tom";


    cout << hashMap.getSize() << endl;
    hashMap.insert(msg1, 15);
    hashMap.insert(msg2, 20);
    cout << hashMap.getSize() << endl;
    cout << hashMap.getIndex(msg1) << endl;
    hashMap.insert(msg3, 2);
    cout << hashMap.getSize() << endl;

    hashMap.insert(msg2, 20);


    // Find msg2
    Item* temp = hashMap.findItem(msg2);
    if(temp != NULL){
        cout << "not null" << endl;
    }
    else{
        cout << "NULL" << endl;
    }


}