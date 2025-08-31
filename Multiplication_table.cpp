#include <iostream> 
using namespace std;
int main () {
int myNum;
int i = 0;
cout << "Enter your number: " ;
cin>> myNum;
while( i<=9 ) {
i++;
cout << myNum << " x " << i << " = " << myNum * i << "\n";
}
    return 0;

}