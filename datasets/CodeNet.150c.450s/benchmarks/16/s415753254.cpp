#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  stack<int> StkIdx;
  stack<pair<int, int> > StkSur;

  char field[20000];
  scanf("%s", field);

  int sum = 0;
  for(int i = 0; field[i] != '\0'; i++) {
    if(field[i] == '\\') {
      StkIdx.push(i);
    } else if(field[i] == '/' && StkIdx.size() > 0) {
      int j = StkIdx.top();
      StkIdx.pop();
      sum += i - j;
      int a = i - j;
      while(StkSur.size() > 0 && StkSur.top().first > j) {
        a += StkSur.top().second;
        StkSur.pop();
      }
      StkSur.push(make_pair(j, a));
    }
  }

  vector<int> ans;
  while(StkSur.size() > 0) {
    ans.push_back(StkSur.top().second);
    StkSur.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << sum << endl;
  cout << ans.size();
  for(unsigned i = 0; i < ans.size(); i++) {
    cout << " ";
    cout << ans[i];
  }
  cout << endl;

  return 0;
}