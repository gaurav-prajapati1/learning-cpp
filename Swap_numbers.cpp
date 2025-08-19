#include <iostream> 
using namespace std;
int main (){
    int a = 5 , b = 6;
    int temp;
    cout << "Before swap "<< a << " " << b<<  "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After swap " << a << " " << b;
    
}