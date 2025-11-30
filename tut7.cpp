#include<iostream>
using namespace std;
int main(){
    int sum = 0, i,n;
    cout << "Enter the how many natural numbers you added : " << endl;
    cin >> n;
    for ( i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout <<"The sum of 10 natural number " << sum;
    
return 0;
}