#include <iostream>
#include <cstring>
using namespace std;




using namespace std;
class Item{
    public:
        string key;
        int value;
        Item* next;
        Item(){};
        Item(string key, int value):key(key), value(value), next(NULL){};

};