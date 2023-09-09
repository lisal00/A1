#include "array2.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

int main(){
    const int x_size = 150;
    int target = 0;
    int value = 0;
    int index = 0;
    int new_value = 0;
    int end_value = 0;
    string new_value_str;
    string index_str;
    string end_value_str;

    int x[x_size]; //initialize array x

    read_array(x);

    /**tests check_array function*/
    cout << "\n1) Enter in an integer to check if it exists in the array: ";
    cin >> target;
    value = check_array(x, target, x_size);
    if (value != -1)
        cout << "Value " << target << " exits at index " << value << ".\n";
    else
        cout << "Value " << target << " was not found.\n";


    /**tests set_value function*/
    cout << "\n2) Enter an index 0-149 you wish to modify: ";
    cin >> index_str;
     try{
        istringstream index_stream(index_str);
        if (!(index_stream >> index) || !index_stream.eof() || index < 0 || index > 149){ //checks to see if str can turn into int & if in bounds
            throw invalid_argument("Invalid input for index."); //else, will throw exception
        }

        cout << "Enter in the value you wish to replace it with: ";
        cin >> new_value_str;
        istringstream new_value_stream(new_value_str); 
        if (!(new_value_stream >> new_value) || !new_value_stream.eof()){//checks to see if str can turn into int
            throw invalid_argument("Invalid input for new_value."); //if not, will throw exception
        }
    }
    catch (const invalid_argument& ex) {
        cerr << "Error: " << ex.what() << endl;
        abort();
    }
    set_value(x, index, new_value);


    /**tests add_value function*/
    cout << "\n3) What value would you like to add to the end of the array? ";
    try {
        cin >> end_value_str;
        istringstream end_value_stream(end_value_str); 
        if (!(end_value_stream >> end_value) || !end_value_stream.eof()){//checks to see if str can turn into int
            throw invalid_argument("Invalid input for end_value."); //if not, will throw exception
        }
    add_value(x, end_value);
    }
    catch(const invalid_argument& ex){
        cerr << "\nError: "<< ex.what();
        abort();
    }
    cout << "The value at index 100 is now " << x[100] << ".\n";


    /**tests remove_value function*/
    cout << "\n4) Enter in an index 0-149 you wish to remove: ";
    cin >> index;
    remove_value(x, index, x_size); 
    cout << "Index " << index << " is now removed.";

    return 0;
}
