#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  while(true) {
    int N; cin >> N;
    if(N == 0) break;
    vector<vector<int>> G(N, vector<int>(5));
    for(int i = 0; i < N; ++i) {
      for(int j = 0; j < 5; ++j)
        cin >> G[i][j];
    }
    int point = 0;
    while(true) {
      bool update = false;
      // ブロックを消す
      for(int i = 0; i < N; ++i) {
        for(int j = 0; j < 5; ++j) {
          if(G[i][j] == 0) continue;
          int s = 0;
          for(int k = j; k < 5; ++k) {
            if(G[i][k] == G[i][j]) ++s;
            else break;
          }
          if(s >= 3) {
            update = true;
            for(int k = j; k < j + s; ++k) {
              point += G[i][k];
              G[i][k] = 0;
            }
          }
        }
      }
      if(!update) break;
      // ブロックを落とす
      for(int i = N - 1; i >= 0; --i) {
        for(int j = 0; j < 5; ++j) {
          if(G[i][j] == 0) {
            int t = -1;
            for(int k = i - 1; k >= 0; --k) {
              if(G[k][j] != 0) {
                t = k;
                break;
              }
            }
            if(t != -1) {
              G[i][j] = G[t][j];
              G[t][j] = 0;
            }
          }
        }
      }
#if 0
      for(int i = 0; i < N; ++i) {
        for(int j = 0; j < 5; ++j) {
          cerr << G[i][j];
        }
        cerr << endl;
      }
#endif
    }
    cout << point << endl;
  }
}