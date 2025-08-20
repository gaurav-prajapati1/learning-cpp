#include<iostream>
using namespace std;
int main (){
    int a = 5;
    int b = 10;
   cout << "Before swap " << a << " "<< b << "\n";
   a = a + b;
   b = a - b;
   a = a - b ;
   cout << "After swap "<< a << " "<<b;
   return 0; 
}