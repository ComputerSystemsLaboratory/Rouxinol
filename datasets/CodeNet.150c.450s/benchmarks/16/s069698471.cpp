#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main() { 
  int s = 0;
  char c;
  stack<int> S1;
  stack<pair<int, int> > S2;
  for (int i = 0; (c = getchar()) != EOF; i++) {
    switch (c) {
      case '\\':
        S1.push(i);
        break;
      case '/':
        if (S1.empty()) {
          break;
        } else {
          int j = S1.top(); S1.pop();
          s += i - j;
          int a = i - j;
          while (!S2.empty() &&S2.top().first > j) {
            a += S2.top().second; S2.pop();
          }
          S2.push(make_pair(j, a));
        } 
    }
  }
  printf("%d\n%d", s, (int)S2.size());
  vector<int> ans;
  while (!S2.empty()) {ans.push_back(S2.top().second); S2.pop();}
  while (!ans.empty()) {printf(" %d", ans.back()); ans.pop_back();}
  printf("\n");
  return 0;
}