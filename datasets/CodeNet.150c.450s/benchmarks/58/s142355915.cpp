#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
  stack<int> S;
  string s;
  int a, b;
  while (cin >> s) {
    if (s == "*") {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(a * b);
    } else if (s == "+") {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(a + b);
    } else if (s == "-") {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(b - a);
    } else {
      sscanf(s.c_str(), "%d", &a);
      S.push(a);
    }
  }
  a = S.top();
  cout << a << endl;
}