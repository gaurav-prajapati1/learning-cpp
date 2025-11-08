#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    string   grade = (marks > 100) ? "Invalid marks" :
                   (marks >= 75) ? "This Student Pass in examination with Grade A in 2025." :
                   (marks >= 60) ? "This Student Pass in examination with Grade B in 2025." :
                   (marks >= 50) ? "This Student Pass in examination with Grade C in 2025." :
                   (marks >= 34) ? "This Student Pass in examination with Grade D in 2025." :
                   "This student Fail in examination 2025";

    cout << "Result: " << grade << endl;
return 0;
}
