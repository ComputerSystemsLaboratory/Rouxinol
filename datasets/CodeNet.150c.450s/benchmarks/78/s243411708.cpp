#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i=0; i < (n); i++)

const int MAX_N = 1000000;
const int INF = 10000000;

int main() {
  vector<int> simen, odd_simen;

  int n = 1, nv = 1;
  while (nv <= MAX_N) {
    simen.push_back(nv);
    if (nv % 2 == 1) odd_simen.push_back(nv);
    n++;
    nv = n*(n+1)*(n+2) / 6;
  }
  vector<int> dp(MAX_N + 1, INF);
  vector<int> odd_dp(MAX_N + 1, INF);
  dp[0] = odd_dp[0] = 0;

  for (int i = 1; i <= MAX_N; i++) {
    for(int j = 0; j < simen.size(); j++) {
      if (i < simen[j]) break;
      dp[i] = min(dp[i], dp[i - simen[j]] + 1);
    }
    for(int j = 0; j < odd_simen.size(); j++) {
      if (i < odd_simen[j]) break;
      odd_dp[i] = min(odd_dp[i], odd_dp[i - odd_simen[j]] + 1);
    }
  }

  while (true) {
    int m;
    cin >> m;
    if (m == 0) break;

    cout << dp[m] << " " << odd_dp[m] << endl;
  }
  return 0;
}