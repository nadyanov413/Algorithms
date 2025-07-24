#include <iostream>

using namespace std;

class ArrayUtils{
    public:
    int binarySearch(int array[], int value, int size){
        int mid;
        int left = 0;
        int right = size - 1;
        while(left < right){
            mid = (left + right)/2;
            if(array[mid] == value){
                return mid;
            }
            else if(value > array[mid]){
                left = mid;
            }
            else if(value < array[mid]){
                right = mid;
            }
        }
        return -1;
    }
};