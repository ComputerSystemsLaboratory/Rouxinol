#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  stack<int> stk1;
  stack<pair<int,int> > stk2;
  int h = 0, maxH = 0;
  stk2.push(make_pair(h, 0));
  int sum = 0;
  for(int i = 0; i < n; ++i) {
    int v = 0;
    if(s[i] == '/' && stk1.size()) {
      int prev = stk1.top();
      stk1.pop();
      v = i - prev;
      sum += v;
    } else if(s[i] == '\\') {
      stk1.push(i);
    }
    
    if(s[i] == '/') ++h;
    else if(s[i] == '\\') --h;
    while(h <= maxH && stk2.size() && stk2.top().first < h) {
      v += stk2.top().second;
      stk2.pop();
    }
    maxH = max(maxH, h);
    stk2.push(make_pair(h, v));
  }
  vector<int> ans;
  while(stk2.size()) {
    if(stk2.top().second) ans.push_back(stk2.top().second);
    stk2.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << sum << endl;
  cout << ans.size();
  for(int i = 0; i < ans.size(); ++i) {
    cout << " " << ans[i];
  }
  cout << endl;
  return 0;
}