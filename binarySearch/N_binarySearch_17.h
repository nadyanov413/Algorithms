#include <iostream>

using namespace std;

class ArrayUtils{
    public:
    int binarySearch(int arr[], int value, int size){
        int left = 0;
        int right = size -1;
        int mid;
        while(left < right){
            mid = (right + left) /2;
            if(value == arr[mid]){
                return mid;
            }
            else if(value < arr[mid]){
                right = mid;
            }
            else if(value > arr[mid]){
                left = mid;
            }
        }
        return -1;



    }
};