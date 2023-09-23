#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int N;
  while (cin>>N, N!=0) {
    if (N < 3) {
      cout << 1 << endl;
      continue;
    }

    int dp[N];
    dp[0] = 1;
    dp[1] = dp[0]+1;
    dp[2] = dp[1]+dp[0]+1; 
    for (int i = 3; i < N; i++) {
      dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
    }
    cout << ceil((dp[N-1]/10.0)/365.0) << endl;
  }  
}

