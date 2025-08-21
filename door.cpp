#include <iostream>
using namespace std;

int main() {
  int myNum;
  cin>> myNum; // Is this a positive or negative number?

  if (myNum > 10) {
    cout << "The value is a positive number.\n";
  } else if (myNum < 10) {
    cout << "The value is a negative number.\n";
  } else {
    cout << "The value is 0.\n";
  }

  return 0;
}
