#include <iostream>
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a, b;
char c;
while (cin >> a >> c >> b) {
switch(c) {
case '?':
 return 0;
case '+':
 cout << a + b << "\n";
 break;
case '-':
 cout << a - b << "\n";
 break;
case '*':
 cout << a * b << "\n";
 break;
case '/':
 cout << a / b << "\n";
 break;
}
}
}