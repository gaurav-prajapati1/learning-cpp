#include<iostream>
#include<string>
using namespace std;
int main() {
    // auto  myNum = 0; //int
    // auto  myFloatNum; //float
    // auto  myLetter; // char
    // auto  myBoolean; // bool
    // auto  myDoubleNum; // double
    // auto  (string) myText; // string
    auto myNum = 0;          // int
    auto myFloatNum = 0.0f;  // float
    auto myLetter = 'a';     // char
    auto myBoolean = false;  // bool
    auto myDoubleNum = 0.0;  // double
    auto myText = string(""); // string
    cout<< "Enter Int: ";
    cin >> myNum;
    cout<< "Enter float: ";
    cin >> myFloatNum;
    cout<< "Enter char: ";
    cin >> myLetter;
    cout<< "Enter Bool: ";
    cin >> myBoolean;
    cout<< "Enter Double: ";
    cin >> myDoubleNum;
    cout<< "Enter String: ";
    cin >> myText;

    cout << "\nYou entered:\n";
    cout << "Int: " << myNum << "\n";
    cout << "Float: " << myFloatNum << "\n";
    cout << "Char: " << myLetter << "\n";
    cout << "Bool: " << myBoolean << "\n";
    cout << "Double: " << myDoubleNum << "\n";
    cout << "String: " << myText << "\n";
    return 0;
}