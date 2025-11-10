#include<iostream>
using namespace std;
int main(){
    // What is pointer-----> That data type which holds the address of other data types
    int a = 10;
    int* b = &a; // b is pointer that store the address of 'a'
    int** c = &b;
    // & ---> (Address of ) operator
    cout << "The value of a = " << a << "\n";
    cout << "The address of a = " <<  b << "\n";
    cout << "The address of &a = " <<  &a << "\n";
    cout << "The address of pointer b = "<< c << "\n";
    cout << "The address of pointer b = "<< &b << "\n";
    // * ---> (value at )Derefrence operator
    
    cout << "The value at address b is = " << *b;
    cout << "The value at addres"<< **c;


return 0;
}