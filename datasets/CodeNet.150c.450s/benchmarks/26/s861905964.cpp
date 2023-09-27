#include <iostream>
using namespace std;
 
int main() {
int n, m;
 
cin >> n >> m;
 
if ( n == m ) {
cout <<  "a == b" << endl;
} else if ( n > m) {
cout << "a > b" << endl;
} else {
cout <<  "a < b" << endl;
}
 
return 0;
}