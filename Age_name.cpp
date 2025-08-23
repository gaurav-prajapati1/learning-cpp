#include<iostream>
#include <string>
using namespace std;
int main (){
    int myAge;
    string myName;
     cout << "Enter your name: ";
      getline (cin, myName);
     cout << "Enter your age: ";
     cin>> myAge;
     cout <<" Hello " << myName << ", ""you are " <<myAge << " years old.";
     return 0;
}