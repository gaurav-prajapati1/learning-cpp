// #include <iostream>
// #include <string>

// using namespace std; 

// int main() {
   
//     string name;      
//     int magicNumber = 2;
//     int userGuess;

   
//     cout << "Enter your name: "; 
    
//     getline(cin, name); 

//     cout << "Hello, " << name << "! Guess the magic number (between 1 and 10): ";
//     cin >> userGuess;

    
//     if (userGuess == magicNumber || userGuess == magicNumber) {
//         cout << "Correct! You're a C++ master." << endl; 
//     } else {
//         cout << "Not quite. The magic number was " << magicNumber << "." << endl;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, largest;

    // Take first number
    cin >> largest;

    // Loop for remaining numbers
    for(int i = 1; i < n; i++) {
        cin >> num;

        if(num > largest) {
            largest = num;
        }
    }

    cout << "Largest number is: " << largest;

    return 0;
}