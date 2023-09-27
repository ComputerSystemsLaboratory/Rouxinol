#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000006;
const int INF = 1<<28;
vector<int> V;
int dp1[MAXN], dp2[MAXN];

int main() {
  for(int i = 1; ; ++i) {
    int k = i * (i + 1) * (i + 2) / 6;
    if(k >= MAXN) break;
    V.push_back(k);
  }
  fill(dp1, dp1 + MAXN, INF);
  fill(dp2, dp2 + MAXN, INF);
  dp1[0] = dp2[0] = 0;
  for(int i = 0; i < V.size(); ++i) {
    for(int j = V[i]; j < MAXN; ++j) {
      dp1[j] = min(dp1[j], dp1[j - V[i]] + 1);
      if(V[i] & 1) dp2[j] = min(dp2[j], dp2[j - V[i]] + 1);
    }
  }
  for(int n; cin >> n && n; ) {
    cout << dp1[n] << " " << dp2[n] << endl;
  }
  return 0;
}