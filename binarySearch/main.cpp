#include <iostream>
#include "binarySearch.h"
using namespace std;

int main(){
    int size = 10;
    int arr[10] = {1,4,6,11,12,14,16,17,40,70};
    ArrayUtils a;
    int index;

    index = a.binarySearch(arr, 40, size);
    cout << "search for number 40: " << index << endl;

    index = a.binarySearch(arr, 20, size);
    cout << "search for number 20: " << index << endl;

}