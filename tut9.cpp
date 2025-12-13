#include<iostream>
using namespace std;
int  evenOrodd(int num){
    if (num % 2 == 0){
        cout << "Even";
    } else
        cout << "Odd";
    

}
int main(){
    int n;
    cout << "Enter your number ";
    cin >> n;
    cout <<"The number is : ";
    evenOrodd(n);
    
return 0;
}


