#include <iostream>
using namespace std;

int main(){

    string var1;
    cout << "input a string: ";
    cin >> var1; 

    if (cin.fail())  // if there is an error...
    { 
        cout << "whoops! there was an error!";
        cin.clear(); // clears the error flags
        cin.ignore(10000, '\n'); // After clearing the error state with cin.clear()
                                 // you still need to remove the invalid input (like "hello", or "0") 
                                 // left in the buffer. 
    }

    else
    {
        cout << "Thank you!" << endl;
        cout << "Your variable size is: " << var1.size() << endl; // gives size of input
   }
    
    return (0);
}
