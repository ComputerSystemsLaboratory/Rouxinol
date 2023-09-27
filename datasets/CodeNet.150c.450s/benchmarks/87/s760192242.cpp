#include <bits/stdc++.h>
using namespace std;

const int MAXH = 11;
const int W = 5;
int H;
int G[MAXH][W+1];

int main() {
  while(cin >> H && H) {
    for(int i = 0; i < H; ++i) {
      for(int j = 0; j < W; ++j) {
        cin >> G[i][j];
      }
    }
    int score = 0;
    bool update;
    do {
      update = false;
      for(int i = 0; i < H; ++i) {
        for(int j = 0, k = 0; j <= W; ++j) {
          if(G[i][k] != G[i][j]) {
            if(G[i][k] && j-k >= 3) {
              update = true;
              score += (j-k) * G[i][k];
              while(k < j) G[i][k++] = 0;
            }
            k = j;
          }
        }
      }
      for(int j = 0; j < W; ++j) {
        for(int i = H-1, k = H-1; i >= 0; --i) {
          if(G[i][j]) {
            int tmp = G[i][j];
            G[i][j] = 0;
            G[k--][j] = tmp;
          }
        }
      }
    } while(update);
    cout << score << endl;
  }
  return 0;
}