#ifndef HEADER_H_
#define HEADER_H_

using namespace std;

/** Reads input file and places values in array*/
void read_array(int x[]);

/** Checks the array to see if target integer exists in array */
int check_array(int x[], int target);

/** Modifies an integer at certain array index */
int set_value(int x[], int index);

/** Adds new integer to end of array */
void add_value(int x[], int value);

/** Removes integer at certain array index */
void remove_value(int x[], int index);

#endif