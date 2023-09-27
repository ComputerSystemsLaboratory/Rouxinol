#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_W 10000

void solve();

int N, W;
int v[MAX_N + 1], w[MAX_N + 1];
int dp[MAX_N + 1][MAX_W + 1];

int main() {
  cin >> N >> W;

  // 品物０
  v[0] = 0;
  w[0] = 0;

  // 品物１〜
  for(int i = 1; i <= N; i++) cin >> v[i] >> w[i];

  solve();
  cout << dp[N][W] << endl;

  return 0;
}

void solve() {
for (int i = 1; i <= N; i++) {          //品物1からスタート
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) {                 //容積 j に品物 i が入らないとき.
                dp[i][j] = dp[i-1][j];
            }else{                          //容積 j（現在の容積）に品物 i（現在の品物）が入るとき.
                dp[i][j] = max( dp[i-1][j], dp[i-1][j-w[i]]+v[i] );
            }
        }
    }
  }

