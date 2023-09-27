#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int H;
int c[10][5];

int main() {

  while(true) {
    cin >> H;
    if(H == 0) break;
    rep(i, H) {
      rep(j, 5) {
        cin >> c[i][j];
      }
    }

    int ans = 0;

    while(true) {
      vector<pair<pair<int, int>, int>> mem;
      rep(i, H) {
        rep(j, 3) {
          if(c[i][j] == 0) continue;
          bool ff = false;
          for(int k = 5 - j; k >= 3; k--) {
            bool f = true;
            rep(l, k - 1) {
              if(c[i][j+l] != c[i][j+l+1]) {
                f = false;
              }
            }
            if(f) {
              mem.push_back({{i, j}, k});
              ans += k * c[i][j];
              ff = true;
            }
            if(ff) {
              j = j + k - 1;
              break;
            }
          }
          if(ff) break;
        }
      }

      if(mem.size() == 0) {
        cout << ans << endl;
        break;
      }

      rep(i, mem.size()) {
        // cout << mem[i].first.first << " " << mem[i].first.second << " " << mem[i].second << endl;
        int sx, sy, k;
        sx = mem[i].first.first;
        sy = mem[i].first.second;
        k = mem[i].second;
        // cout << sx << " " << sy << " " << k << endl;
        if(sx == 0) {
          rep(j, k) {
            c[sx][sy+j] = 0;
        }
        } else {
          for(int j = 1; j <= sx; j++) {
            rep(l, k) {
              swap(c[0][sy+l], c[j][sy+l]);
            }
          }
          rep(j, k) {
            c[0][sy+j] = 0;
          }
        }
      }

    }

    // rep(i, H) {
    //   rep(j, 5) {
    //     cout << c[i][j] << " ";
    //   }
    //   cout << endl;
    // }

  }

  return 0;
}
