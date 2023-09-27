#include <bits/stdc++.h>
using namespace std;
#ifdef _DEBUG
  #include "_DEBUG.hpp"
#endif
//#define int long long
const int INF = 1 << 30;

signed main(){

  int D; cin >> D;
  vector<int> C(26);
  for(int i = 0; i < 26; i++){
    cin >> C[i];
  }

  vector<vector<int>> S(D, vector<int>(26));
  for(int i = 0; i < D; i++){
    for(int j = 0; j < 26; j++){
      cin >> S[i][j];
    }
  }

  vector<int> t(D);
  for(int i = 0; i < D; i++){
    cin >> t[i];
    t[i]--;
  }
  // int m; cin >> m;
  // for(int i = 0; i < m; i++){
  //   int d, q; cin >> d >> q;
  // }

  int res = 0;
  vector<int> L(26, -1);
  for(int i = 0; i < D; i++){
    res += S[i][t[i]];
    L[t[i]] = i;
    for(int j = 0; j < 26; j++){
      res -= C[j] * (i - L[j]);
      //cout << C[j] * (i - L[j]) << " ";
    }
    cout << res << endl;
  }

  // int score = -INF;
  // vector<int> ans(D);
  // while(true){
  //   int res = 0;
  //   vector<int> L(26, -1);
  //   vector<int> dp(D);
  //   for(int i = 0; i < D; i++){
  //     int T = dist_T(rnd);
  //     res += S[i][t[i]];
  //     L[t[i]] = i;
  //     for(int j = 0; j < 26; j++){
  //       if(L[j] == -1) continue;
  //       res -= i - L[j];
  //     }
  //     dp[i] = T;
  //   }
  //   if(score < res){
  //     score = res;
  //     ans = dp;
  //   }

  //   clock_t end = clock();
  //   const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
  //   //printf("time %lf[ms]\n", time);
  //   if(time >= 1900) break;
  //   //cout << dp << " " << res << endl;
  // }

  // for(int p : ans){
  //   cout << p << endl;
  // }

  return 0;
}