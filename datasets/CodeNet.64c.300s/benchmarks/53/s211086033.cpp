#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
int a;
int b;
int c;
int count = 0;

cin >> a >> b >> c;
for (int i = a; i <= b; i ++) {
if (c % i == 0) {
count ++;
}
}
cout << count << endl;
return 0;
}