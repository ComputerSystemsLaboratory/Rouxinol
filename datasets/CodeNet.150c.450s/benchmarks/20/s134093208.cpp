#include <iostream>
using namespace std;

int main() {
int h,m,s,input;
cin >> input;
h = input / 3600; input %= 3600;
m = input / 60; input %= 60;
s = input;
cout << h << ":" << m << ":" << s << endl;
return 0;
}