#include<iostream>
#include<iomanip>
using namespace std;
// Variables and datatypes
// Statically Typed Language
// Primititives Datatypes (int, char,bool,float,double)
int main(){
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    //Variables Init (Declare+Assign
    int marks = 10;
    float temp = 3.14156738;
    double pi = 3.14156738;
    cout <<marks <<endl;
    cout <<fixed <<setprecision (8) << temp <<endl;
    cout <<fixed <<setprecision (8) << pi <<endl;
    char ch= 'B';
    cout << ch <<endl;
    bool isRainy = true;
    cout << isRainy <<endl;
    return 0;



}