#include <iostream>
#include "N_ArrayList_01.h"

using namespace std;


int main(){
    ArrayList al;
    al.add(10);
    al.add(11);

    cout << al.get(1) << endl;

    al.add(12);
    al.add(13);
    cout << al.get(3) << endl;

}
