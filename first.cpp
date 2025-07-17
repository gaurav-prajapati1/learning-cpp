#include<iostream>
using namespace std;
 
int add(int a, int b)
{
    int c;
    c= a+b;
    return c;
}
int main()
{
    int x, y, z;
    x = 14;
    y = 16;
    z = add (x,y);
    cout<<z;
}