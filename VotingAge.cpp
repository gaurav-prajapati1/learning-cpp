#include<iostream>
using namespace std;
int main(){
    int myAge;
    cout << "My age: ";
    cin >> myAge;
    int votingAge = 18;
    if (myAge >= votingAge){
        cout << "Eligible for vote.";
    } else {
        cout << "Not eligible for vote.";
    }
    return 0;
}