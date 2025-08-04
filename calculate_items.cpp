#include<iostream>
using namespace std;
int main (){
int items = 100;
int cost_per_item = 10;
int total_cost = items * cost_per_item;
char currency = '$';
cout << "Number of items: " << items << "\n";
cout << "Cost per items: " << cost_per_item << currency << "\n";
cout << "Total cost = " << total_cost << currency << "\n";
return 0;
}
