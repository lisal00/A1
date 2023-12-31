#include "array2.h"
#include <fstream>
#include <iostream>

using namespace std;

/** Reads input file and places values in array
    @param x Array to use
*/
void read_array(int x[]){
    ifstream inFile;
    inFile.open("input.txt");
    
    while (!inFile.eof()){
        for(int i = 0; i < 100; i++){//loads integers into the array until index 99
            inFile >> x[i];
        }
        for(int i = 100; i < 150; i++){ //loads 0's into the rest of array
            x[i] = 0;
        }
        inFile.close();
    }
}

/** Checks the array to see if target integer exists in array 
    @param x Array to search
    @param target Target to search for
    @param x_size Size of array
    @return Index of target if found, -1 if not
*/
int check_array(int x[], int target, int x_size){
    for(int i = 0; i < x_size; i++){
        if(x[i] == target){
            return i;
        }   
    }
    return -1;
}

/** Modifies an integer at certain array index
    @param x Array to be used
    @param index Index to be modified
    @param new_value Value to replace old value
    @return Old and new values
*/
void set_value(int x[], int index, int new_value){
    int old_value = 0;
    old_value = x[index];
    x[index] = new_value;

    cout << "The old value of index " << index 
    << " was " << old_value << ". The new value is now " << x[index] << ".\n";
}

/** If valid input, adds new integer to end of array. If not, aborts.
    @param x Array to modify
    @param end_value Integer to add to end of array
*/
void add_value(int x[], int end_value){
    x[100] = end_value;
}

/** Removes integer at certain array index
    @param x Array to be used
    @param index Index to be removed
    @param x_size Array size
*/
void remove_value(int x[], int index, int x_size){
    for (int i = index; i < x_size - 1; i++){
        x[i] = x[i+1];
    }
}
