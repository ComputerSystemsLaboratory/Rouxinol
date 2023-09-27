#include<stdio.h>
#include<stack>
#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

stack<int> S1;
stack<pair<int, int> > S2;

int area = 0;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == '\\') {
      S1.push(i);
    } else if (s[i] == '/') {
      if (S1.size() == 0) continue;
      int j = i - S1.top();
      area += j;
      int areas2 = 0;
      while (S2.size() > 0 && S2.top().first > S1.top()) {
        areas2 += S2.top().second;
        S2.pop();
      }
      S2.push(make_pair(S1.top(), j+areas2));
      S1.pop();
    }
  }
  printf("%d\n", area);
  printf("%lu", S2.size());
  stack<int> ans;
  while (S2.size() > 0) { ans.push(S2.top().second); S2.pop();}
  while (ans.size() > 0) {
    printf(" %d", ans.top());
    ans.pop();
  }
  printf("\n");

  return 0;
}

