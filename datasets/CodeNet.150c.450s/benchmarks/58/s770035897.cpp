#include "stack"
#include "stdio.h"
#include "cstdlib"
#include "iostream"
using namespace std;

int main() {
  stack<int> S;
  string s;
  int a, b;

  while(cin >> s){
    if(s[0]=='+') {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a+b);
    }
    else if(s[0]=='-') {
      b = S.top(); S.pop();
      a = S.top(); S.pop();
      S.push(a-b);
    }
    else if(s[0]=='*') {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a*b);
    }
    else {
      S.push(atoi(s.c_str()));
    }
  }

  printf("%d\n", S.top());

  return 0;
}