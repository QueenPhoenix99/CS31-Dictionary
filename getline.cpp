
#include <iostream>
using namespace std;
int main(){

    // SETUP: NORMAL CIN
    string var0; 
    cout << "Enter one word, no spaces : ";
    cin >> var0; 
    cout << "You entered: " << var0 << endl; 

    // EXAMPLE 1: STRING GETLINE
    string var1; 
    cout << "Enter a string: ";
    cin.ignore(10000, '\n'); // cin.ignore used because cin was used in line 9. 
                             // If line 9 was a getline, or if there was no cin before, 
                             //    then cin.ignore before the first getline is not necessary
    getline(cin, var1); // getline for STRING - cin the whole line
    cout << "You entered: " << var1 << endl; 
    
    // EXAMPLE 2: CHARACTER GETLINE
    char var2[100]; // declare character; [100] = space for 99 char + null terminal
    cout << "Enter some characters: ";
    cin.getline(var2, 100); // getline for CHAR, 100 char limit, usually matches with line 22
                            // there is no cin.ignore necessary here because the previous "cin" was getline
    cout << "You entered: " << var2 << endl; 


    // if you still don't understand, here's an explanation: https://www.youtube.com/watch?v=fcygVtDXanM

    return (0);
}


