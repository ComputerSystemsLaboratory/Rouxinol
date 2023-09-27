#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  stack<int> st;
  stack<pair<int, int>> st2;

  int sum = 0;
  for (int i = 0; i < (int)s.length(); i++) {
    if (s[i] == '\\') {
      st.push(i);
    }
    if (s[i] == '/' && !st.empty()) {
      int left = st.top();
      st.pop();
      int area = i - left;
      sum += area;
      while (st2.size() > 0 && st2.top().first > left) {
        area += st2.top().second;
        st2.pop();
      }
      st2.push(make_pair(left, area));
    }
  }
  vector<int> ans;
  while (!st2.empty()) {
    ans.push_back(st2.top().second);
    st2.pop();
  }
  reverse(ans.begin(), ans.end());

  cout << sum << endl;
  cout << ans.size();
  for (int i = 0; i < ans.size(); i++) {
    cout << " " << ans[i];
  } cout << endl;
  return 0;
}
