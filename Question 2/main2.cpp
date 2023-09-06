#include "array2.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
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
    cout << "\n1) Enter in an integer to check if it exists in the array." << endl;
    cin >> target;
    value = check_array(x, target, x_size);
    if (value != -1)
        cout << "Value " << target << " exits at index " << value << ".";
    else
        cout << "Value " << target << " was not found.";


    /**tests set_value function*/
    cout << "\n2) Enter an index 0-149 you wish to modify.\n";
    cin.exceptions(ios_base::failbit);
    try{
        cin >> index;
        if (index < 0 || index > 149){ //checks to see if input is in bounds
            throw 0;
        }
        cout << "Enter in the value you wish to replace it with.\n";
        cin >> new_value;
    }
    catch(ios_base::failure& ex){
        cerr << "Invalid input. Please enter a whole number.";
        abort();
    }
    catch(int ex2){
        cout << "Out of range from array.";
        abort();
    }
    catch(...){
        cout << "Undefined exception occured.";
        abort();
    }
    set_value(x, index, new_value);

    
    /**tests add_value function*/
    cout << "\n3) What value would you like to add to the end of the array?\n";
    cin >> end_value;
    add_value(x, end_value);
    cout << "The value at index 100 is now " << x[100] << ".\n";

    /**tests remove_value function*/
    cout << "4) Enter in an index 0-149 you wish to remove.\n";
    cin >> index;
    remove_value(x, index, x_size);
    cout << "Index " << index << " is now removed.";

    return 0;
}
