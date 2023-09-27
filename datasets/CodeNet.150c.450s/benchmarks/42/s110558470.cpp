#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int main() {
  int n, q, t = 0;
  cin >> n >> q;
  vector<string> names(n); 
  vector<int> times(n);
  queue<int> que;
  REP(i, n) {
    cin >> names[i] >> times[i];
    que.push(i);
  }
  
  while (!que.empty()) {
    auto idx = que.front();
    que.pop();
    if (times[idx] <= q) {
      t += times[idx];
      cout << names[idx] << " " << t << endl;
    } else {
      t += q;
      times[idx] -= q;
      que.push(idx);
    }
  }
}

