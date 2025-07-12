#include <iostream>
#include "item.h"
#define DEFAULT_CAPACITY 1000
#include <functional> 

class HashMap{
    private:
        Item** items;
        int size;
        int capacity;


    public:
        HashMap(): HashMap(DEFAULT_CAPACITY){

        }
        HashMap(int capacity){
            this->capacity = capacity;
            this->size = 0;
            this->items = new Item*[capacity];
        }

        std::hash<std::string> hash_fn;

        Item* findItem(string key){
            int index  = hash_fn(key)%capacity;

            cout << "---- findItem: " << index << endl;
            Item* item = items[index];
            while(item != NULL){
                if(item->key == key){
                    break;
                }
                item = item->next;
            }
            return item;
        }

        int getSize(){
            return size;
        }

        int getIndex(string key){
            return hash_fn(key) % capacity;
        }

        void insert(string key, int value){
            Item *item = findItem(key);
            if(item == NULL){
                // no such key 
                int index = hash_fn(key) % capacity;
                cout << "---- insert: " << index << endl;

                Item* newItem = new Item(key, value);


                if(item == NULL){
                    //there is no linked list 
                    items[index] = newItem;
                }
                else{
                    newItem->next = items[index];
                    items[index] = newItem;
                   
                }
                size++;
               
            } else {
                // there is an element with s uch key
            }

        }


};