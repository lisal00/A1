#ifndef ARRAY2_H_
#define ARRAY2_H_
#include "array2.cpp" //VSCode wont compile without including this .cpp file

using namespace std;

/** Reads input file and places values in array
    @param x Array to use
*/
void read_array(int x[]);

/** Checks the array to see if target integer exists in array 
    @param x Array to search
    @param target Target to search for
    @param x_size Size of array
    @return Index of target if found, -1 if not
*/
int check_array(int x[], int target, int x_size);

/** Modifies an integer at certain array index
    @param x Array to be used
    @param index Index to be modified
    @param new_value Value to replace old value
    @return Old and new values
*/
void set_value(int x[], int index, int new_value);

/** Adds new integer to end of array
    @param x Array to modify
    @param end_value Integer to add to end of array
*/
void add_value(int x[], int end_value);

/** Removes integer at certain array index
    @param x Array to be used
    @param index Index to be removed
    @param x_size Array size
*/
void remove_value(int x[], int index, int x_size);

#endif