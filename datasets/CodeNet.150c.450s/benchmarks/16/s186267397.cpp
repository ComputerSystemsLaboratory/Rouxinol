#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

/* void printv(stack<int> q){ */
/*   for(int i:q)cout<<i<<' '; */
/*   cout<<endl; */
/* } */

// Note:this is a wrong answer
int main() {
  string s;
  cin >> s;
  stack<int> tmp;
  stack<pair<int, int>> ans; // pos, areas

  for (int i = 0; i < int(s.length()); i++) {
    if (s[i] == '\\') {
      tmp.push(i);
    } else if (s[i] == '/') {
      if (!tmp.empty()) {
        int distance = i + 1 - tmp.top();
        int area = distance - 1;
        while (!ans.empty() && ans.top().first > tmp.top()) {
          area += ans.top().second;
          ans.pop();
        }
        ans.push(make_pair(tmp.top(), area));
        tmp.pop();
      }
    }
  }

  int sum_areas = 0;
  vector<int> L;
  while (!ans.empty()) {
    sum_areas += ans.top().second;
    L.push_back(ans.top().second);
    ans.pop();
  }
  reverse(L.begin(), L.end());
  cout << sum_areas << endl;
  cout << L.size();
  for (int i : L) {
    cout << ' ' << i;
  }
  cout << endl;
}

