#include<iostream>
using namespace std;
int main(){
    int myNum;
    int revNumber=0;
    cout << "Enter your number: ";
    cin>>myNum;
    while (myNum!=0){
    int rem = myNum%10;
    revNumber = revNumber *10 + rem;
    myNum = myNum/10;
}
cout << "My reverse number is: " << revNumber;
}
