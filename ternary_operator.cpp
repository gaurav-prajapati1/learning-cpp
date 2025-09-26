#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter your Number: ";
    cin >> num;
    cout << (num%2==0? "Your number is even !":"Your number is Odd !");
    return 0;
}
