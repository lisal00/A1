#include "array.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int x_size = 150;
    int target = 0;
    int value = 0;
    int index = 0;
    int new_value = 0;
    int end_value = 0;

    int x[x_size]; //initialize array x

    read_array(x);

    /**tests check_array function*/
    cout << "1) Enter in an integer to check if it exists in the array: " ;
    cin >> target;
    value = check_array(x, target, x_size); 
    if (value != -1)
        cout << "Value " << target << " exits at index " << value << ".\n";
    else
        cout << "Value " << target << " was not found.\n";

    /**tests set_value function*/
    cout << "\n2) Enter an index 0-149 you wish to modify: ";
    cin >> index;
    cout << "Enter in the value you wish to replace it with: ";
    cin >> new_value;
    set_value(x, index, new_value);

    /**tests add_value function*/
    cout << "\n3) What value would you like to add to the end of the array? ";
    cin >> end_value;
    add_value(x, end_value);
    cout << "The value at index 100 is now " << x[100] << ".\n";

    /**tests remove_value function*/
    cout << "\n4) Enter in an index 0-149 you wish to remove: ";
    cin >> index;
    remove_value(x, index, x_size);
    cout << "Index " << index << " is now removed.\n";

    cout << "\nHere is the modified array: \n";
    for(int i = 0; i < 150; i++){
            cout << x[i] << " ";
        }

    return 0;
}
