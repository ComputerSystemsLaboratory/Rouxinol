#include <bits/stdc++.h>
using namespace std;

int n, m;
int memo[2][1505] = {0};
vector<int> ls[2];

long long solve();

int main() {
  int i;
  while(1) {
    cin >> n >> m;
    if(n + m == 0) break;
    for(i = 1; i <= n; ++i) {
      cin >> memo[0][i];
      memo[0][i] += memo[0][i - 1];
    }
    for(i = 1; i <= m; ++i) {
      cin >> memo[1][i];
      memo[1][i] += memo[1][i - 1];
    }
    cout << solve() << endl;
    for(i = 0; i < 2; ++i)
      ls[i].erase(ls[i].begin(), ls[i].end());
    for(i = 1; i <= n; ++i) memo[0][i] = 0;
    for(i = 1; i <= m; ++i) memo[1][i] = 0;
  }
  return 0;
}

long long solve() {
  int i, j, k, now;
  long long ans = 0;
  for(i = 0; i < n; ++i)
    for(j = i + 1; j <= n; ++j)
      ls[0].push_back(memo[0][j] - memo[0][i]);
  for(i = 0; i < m; ++i)
    for(j = i + 1; j <= m; ++j)
      ls[1].push_back(memo[1][j] - memo[1][i]);
  for(k = 0; k < 2; ++k) sort(ls[k].begin(), ls[k].end());
  for(i = 0; i < ls[0].size(); ++i) {
    now = ls[0][i];
    auto it = lower_bound(ls[1].begin(), ls[1].end(), now);
    auto it2 = upper_bound(ls[1].begin(), ls[1].end(), now);
    if(it != ls[1].end()) ans += (it2 - it);
  }
  return ans;
}
