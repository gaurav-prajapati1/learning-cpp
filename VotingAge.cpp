#include<iostream>
using namespace std;
int main(){
    int myAge;
    cout << "My age: ";
    cin >> myAge;
    int votingAge = 18;
    if (myAge >= votingAge){
        cout << "Old enough for vote!";
    } else {
        cout << "Not old enough for vote.";
    }
    return 0;
}