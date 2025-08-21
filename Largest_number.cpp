#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;
    cout<< "Enter fifth number: ";
    cin >> num5;


    int  largest = max(num1, (num2, num3, num4, num5));
    cout << "The largest number is: " << largest << endl;

    return 0;
}
