#include <iostream>
using namespace std;
int main () {
    int myNum;
    cout << "Enter your number";
    cin >> myNum;
    if(myNum %2==0){
        cout<< " Given number is even.";
    } else {
        cout << "Giver number is odd.";
    }
    return 0;

}