#include "header.h"
#include <ifstream>
#include <iostream>

using namespace std;

/** Reads input file and places values in array*/
void read_array(int x[]){
    ifstream inFile;
    inFile.open("input.txt");
    
    while (!inFile.eof()){
        for(int i = 0; i < 150; i++){
            inFile >> x[i];
            cout << x[i] << " ";
        }
        inFile.close();
    }
}

/** Checks the array to see if target integer exists in array */
int check_array(int x[], int target){

}

/** Modifies an integer at certain array index */
int set_value(int x[], int index);

/** Adds new integer to end of array */
void add_value(int x[], int value);

/** Removes integer at certain array index */
void remove_value(int x[], int index);
