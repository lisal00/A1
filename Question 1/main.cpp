#include "header.h"
#include "header.cpp"  //remove this later
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int size = 150;
    int target = 0;
    int value = 0;
    int index= 0;
    int new_value = 0;
    int end_value = 0;

    int array[size];

    read_array(array);
    
    cout << "\nEnter in an integer to check if it exists in the array." << endl;
    cin >> target;

    value = check_array(array, target, size);
    if (value != -1)
        cout << "Value " << target << " exits at index " << value;
    else
        cout << "Value " << target << "was not found.";

    cout << "\nEnter an index 0-149 you wish to modify.\n";
    cin >> index;
    cout << "\nEnter in the value you wish to replace with.\n";
    cin >> new_value;

    set_value(array, index, new_value);

    cout << "\nWhat value would you like to add to the end of the array?\n";
    cin >> end_value;

    add_value(array, end_value);
    cout << "The value at index 100 is now " << array[100];

    cout << "Enter in index 0-149 you wish to remove. \n";
    cin >> index;
    cout << endl;

    remove_value(array, index, size);

    return 0;
}
