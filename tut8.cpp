#include<iostream>
using namespace std;
int sum(int a , int b){
    int c = a + b;
    return c;
}
int sub(int a , int b){
    int c = a - b;
    return c;
}
int mul(int a , int b){
    int c = a * b;
    return c;
}
int main(){
    int num1, num2 ;
    cout<< "Enter the value of num1 : ";
    cin >> num1;
    cout << "Enter the value of num2 : ";
    cin >> num2;
    cout << "The Addition of both numbers : " << sum(num1,num2)<< endl;
    cout << "The Subtraction of both numbers : " << sub(num1,num2)<< endl;
    cout << "The Multiplication of both numbers : " << mul(num1,num2)<< endl;

    
return 0;
}