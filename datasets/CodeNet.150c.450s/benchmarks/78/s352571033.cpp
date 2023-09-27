#include <bits/stdc++.h>

#define REP(i, s, e) for(int i = (int)(s); i < (int)(e); ++i)
#define rep(i, n) REP(i, 0, n)

using namespace std;

const int MAX_N = 1e6 + 10;
const int INF = 1e9;
int dp1[MAX_N];
int dp2[MAX_N];

int main() {
  vector<int> x, y;
  REP(i, 1, 201) {
    int z = i * (i+1) * (i+2) / 6;
    x.push_back(z);
    if(z&1) y.push_back(z);
  }
  
  rep(i, MAX_N) dp1[i] = dp2[i] = INF;
  dp1[0] = 0;
  dp2[0] = 0;
  for(const auto& a : x) {
    for(int i = 0; i + a < MAX_N; ++i) {
      dp1[i+a] = min(dp1[i+a], dp1[i]+1); 
    }
  }
  for(const auto& a : y) {
    for(int i = 0; i + a < MAX_N; ++i) {
      dp2[i+a] = min(dp2[i+a], dp2[i]+1); 
    }
  }
  int n;
  while(cin >> n) {
    if(n == 0) break;
    cout << dp1[n] << " " << dp2[n] << endl;
  }
  return 0;
}

