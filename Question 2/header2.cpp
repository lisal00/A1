#include "header2.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

using namespace std;

/** Reads input file and places values in array
    @param x Array to use
*/
void read_array(int x[]){
    ifstream inFile;
    inFile.open("input.txt");
    
    while (!inFile.eof()){
        for(int i = 0; i < 100; i++){
            inFile >> x[i];
        }
        for(int i = 100; i < 150; i++){
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

    try{
        old_value = x[index];
    }
    catch(out_of_range& ex){
        cout << "bad";
    }

    try{
    throw x[index] = new_value;
    }
    catch(...){
        cerr << "exception no goood :)";
        abort();
    }

    cout << "The old value of index " << index 
    << " was " << old_value << ". The new value is now " << x[index] << ".";
}

/** Adds new integer to end of array
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
    /* testing and printing out array
    for(int i = 0; i < 150; i++){
            cout << x[i] << " ";
        }
*/
}
