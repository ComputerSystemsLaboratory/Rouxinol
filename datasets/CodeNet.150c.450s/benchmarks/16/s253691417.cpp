#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  stack<int> q1; stack<P> q2;
  int A = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '\\') {
      q1.push(i);
    } else if (s[i] == '/' && !q1.empty()) {
      int p = q1.top(); q1.pop();
      int l = i - p;
      A += l;
      while (!q2.empty() && q2.top().first > p) {
        l += q2.top().second; q2.pop();
      }
      q2.push({p, l});
    }
  }

  vector<int> L(q2.size());
  for (int i = q2.size() - 1; i >= 0; --i) {
    L[i] = q2.top().second; q2.pop();
  }

  cout << A << endl;
  cout << L.size();
  for (int i = 0; i < L.size(); ++i) {
    cout << ' ' << L[i];
  }
  cout << endl;
  return 0;
}

