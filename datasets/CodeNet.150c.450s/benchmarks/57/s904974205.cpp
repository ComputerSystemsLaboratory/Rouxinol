#include <iostream>
#include <vector>

#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int x, y;
  char op;
  while(cin >> x >> op >> y) {
    if(op == '?') break;
    if(op == '+') cout << x+y << endl;
    if(op == '-') cout << x-y << endl;
    if(op == '*') cout << x*y << endl;
    if(op == '/' && y != 0) cout << x/y << endl;
  }

}