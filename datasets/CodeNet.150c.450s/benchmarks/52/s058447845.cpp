#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main(void) {
  int num;
  stack<int> s;
  while(cin >> num) {
    if(num != 0) s.push(num);
    else { printf("%d\n", s.top()); s.pop(); }
  }
  return 0;
}