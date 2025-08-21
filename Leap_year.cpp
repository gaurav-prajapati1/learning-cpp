#include<iostream>
using namespace std;
int main (){
    int year;
    cout << "Enter your year: ";
    cin >> year;
    if(year%4==0){
        cout<< "Leap year.";
    } else { 
        cout << "Not a leap year";
    }
    return 0;
}
