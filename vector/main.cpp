#include <iostream>
#include "N_ArrayList_01.h"
#include <fstream>

using namespace std;


int main(){
    ArrayList al;

    // Read data
    ifstream inputFile("numbers.txt");
    if (!inputFile) {
        cerr << "Error opening file.\n";
        return 1;
    }
    int number;
    while (inputFile >> number) {
        al.add(number);
    }
    inputFile.close();



    // Process data
    int sum = 0;
    int size = al.getSize();
    for(int i = 0; i < size ; i++){
        sum += al.get(i);
    }



    // Save data
    ofstream outputFile("results.txt");
    if (!outputFile) {
        cerr << "Error opening file.\n";
        return 1;
    }
    outputFile << "sum of numbers: " << sum << endl;
    outputFile.close();

    return 0;

}
