#ifndef HEADER_H_
#define HEADER_H_

using namespace std;

/** Reads input file and places values in array*/
void read_array(int x[]);

/** Checks the array to see if target integer exists in array */
int check_array(int x[], int target, int x_size);

/** Modifies an integer at certain array index */
void set_value(int x[], int index, int new_value);

/** Adds new integer to end of array */
void add_value(int x[], int end_value);

/** Removes integer at certain array index */
void remove_value(int x[], int index, int x_size);

#endif
