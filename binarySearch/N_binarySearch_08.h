#include <iostream>

using namespace std;

class ArrayUtils{
    private:
    public:
    int binarySearch(int arr[], int value, int size){
        int left = 0;
        int right = size - 1;
        int mid;
        while(left < right ){
            mid = (left + right)/ 2;
            if(arr[mid] == value){
                return mid;
            }
            else if(value < arr[mid]){
                left = mid;
            }
            else if(value > arr[mid]){
                right = mid;
            }

        }
        return -1;

    }
};