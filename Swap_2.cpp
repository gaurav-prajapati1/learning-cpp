#include<iostream>
using namespace std;
int main () {
    int x = 10;
    int y = 20 ;
    cout << "Before swapping: x = " << x << ", y = " << y << "\n";
    x = x * y; // x = 30
    y = x / y; // y = 6
    x = x / y; //
    cout << "After swapping: x = " << x << ", y = " << y << "\n";
    return 0;

}