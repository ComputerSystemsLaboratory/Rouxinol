#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int H, W = 5; 
  while (cin >> H, H!=0) {
    // v[W][H]
    vector<vector<int>> v(W, vector<int>(H, 0));
    for (int i = H-1; i>=0; i--) {
      for (int j = 0; j < W; j++) {
        int t;
        cin >> t;
        v[j][i]=t;
      }
    }
    
    // くそこーどりょうさんきじゃないですか
    int ans = 0;
    for (int i = 0; i < H; i++) {
      for (int j = H-1; j >= 0; j--) {
        int last = 0, cnt = 0;
        for (int k = 0; k < W; k++) {
          if (v[k].size() <= j) {
            if (cnt >= 3) {
              ans += v[k-1][j]*cnt;
              for (int l = k-cnt; l < k; l++) {
                v[l].erase(v[l].begin()+j);
              }
            }
            cnt = 0;
            last = 0;
          } else if (last == v[k][j]) {
            cnt++;
          } else {
            if (cnt >= 3) {
              ans += v[k-1][j]*cnt;
              for (int l = k-cnt; l < k;  l++) {
                v[l].erase(v[l].begin()+j);
              }
            }
            cnt = 1;
            last = v[k][j];
          }
        }
        if (cnt >= 3) {
          ans +=v[W-1][j]*cnt;
          for (int l = W-cnt; l < W; l++) {
            v[l].erase(v[l].begin()+j);
          }
        }
      }
    }
    
    cout << ans << endl;
  }
}

