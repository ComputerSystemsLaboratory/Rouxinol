#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(void) {
int number;
int count = 1;
cin >> number;
while (number != 0) {
cout << "Case " << count << ": " << number << endl; 
cin >> number;
count ++;
}
return 0;
}