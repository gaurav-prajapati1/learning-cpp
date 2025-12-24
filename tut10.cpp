#include <iostream>
#include <string>

using namespace std; 

int main() {
   
    string name;      
    int magicNumber = 2;
    int userGuess;

   
    cout << "Enter your name: "; 
    
    getline(cin, name); 

    cout << "Hello, " << name << "! Guess the magic number (between 1 and 10): ";
    cin >> userGuess;

    
    if (userGuess == magicNumber || userGuess == magicNumber) {
        cout << "Correct! You're a C++ master." << endl; 
    } else {
        cout << "Not quite. The magic number was " << magicNumber << "." << endl;
    }

    return 0;
}