#include<iostream>
#include<stack>
#include<stdlib.h>


using namespace std;

int main(void) {
  stack<int> S;

  int pre;
  int next;
  string s;
  while(cin >> s) {
    if(s[0] == '+') {
        pre = S.top();
        S.pop();
        next = S.top();
        S.pop();
        S.push(next + pre);
    }
    else if(s[0] ==  '-') {
        pre = S.top();
        S.pop();
        next = S.top();
        S.pop();
        S.push(next - pre);
    }
    else if(s[0] == '*') {
        pre = S.top();
        S.pop();
        next = S.top();
        S.pop();
        S.push(next * pre);
    }
    else if(s[0] == '/') {
        pre = S.top();
        S.pop();
        next = S.top();
        S.pop();
        S.push(next / pre);
    }
    else {
        S.push(atoi(s.c_str()));
    }
  }
  cout << S.top() << endl;
  S.pop();
  return 0;
}