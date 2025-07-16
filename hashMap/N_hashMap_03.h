#include <iostream>
#include "item.h"
#define DEFAULT_CAPACITY 1000
#include <functional> 
std::hash<std::string> hash_fn;

class HashMap{
    private:
        int capacity;
        int size;
        Item** items;
    public:
        HashMap(): HashMap(DEFAULT_CAPACITY){}
        HashMap(int capacity){
            this->capacity = capacity;
            this->size = 0;
            this->items = new Item*[capacity];
        }
        Item* findItem(string key){
            int index = hash_fn(key) % capacity;
            Item* item = items[index];
            while(item != NULL){
                if(item->key == key){
                    break;
                }
                item = item->next;

            }
        }
        int getSize(){
            return size;
        }
        int getIndex(string key){
            return hash_fn(key) % capacity;
        }
        void insert(string key, int value){
            Item* item = findItem(key);
            if(item == NULL){
                int index = hash_fn(key) % capacity;
                Item* newItem = new Item(key, value);
                if(item == NULL){
                    items[index] = newItem;
                }
                else{
                    newItem->next = item;
                    item = newItem;
                }
                size++;
            }else{
                item->value = value;
            }

        }

};

