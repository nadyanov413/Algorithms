
#define DEFAULT_CAPACITY 2
#define EXPAND_FACTOR 2
#include <cstring>
class ArrayList{
private:  
    int capacity;
    int size;
    int* values;

public:
    ArrayList(): ArrayList(DEFAULT_CAPACITY){}

    ArrayList(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->values = new int[capacity];
    }
    int get(int index){
        return values[index];
    }
    void add(int data){
        ensureCapacity();
        values[size++] = data;
    }
    
    void ensureCapacity(){
        if(size == capacity){
            capacity *= EXPAND_FACTOR;
            int* temp = new int[capacity];
            memcpy(temp, values, size * sizeof(int));
            delete values;
            values = temp;
        }
    }

    

};