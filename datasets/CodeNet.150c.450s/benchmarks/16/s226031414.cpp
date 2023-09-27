#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using pi = pair<int, int>;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int main() {
  stack<int> S1;
  stack<pi> S2;
  char ch;
  int sum = 0;
  for (int i = 0; cin >> ch; ++i) {
    if (ch == '\\') S1.push(i);
    else if (ch == '/' && !S1.empty()) {
      auto j = S1.top(); S1.pop();
      sum += i - j;
      int a = i - j;
      while (!S2.empty() && S2.top().first > j) {
        a+=S2.top().second; S2.pop();
      }
      S2.push(make_pair(j, a));
    } 
  }
  
  vector<int> ans;
  while (!S2.empty()) {
    ans.push_back(S2.top().second);
    S2.pop();
  }
  reverse(ALL(ans));
  cout << sum << endl;
  cout << ans.size();
  REP(i, ans.size()) {
    cout << " " << ans[i];
  }
  cout << endl;
}

