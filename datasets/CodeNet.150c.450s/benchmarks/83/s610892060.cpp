#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, w;                 // 個数nと残り重量w
int V[110], W[110];       // 価値vと重さwの配列
int dp[110][10010] = {};  // [個数][残り重量]のときの最大価値

int rec(int i, int w) {
  if (dp[i][w] > 0)  // 結果を知っているなら返す
    return dp[i][w];
  else if (i == n)  // 最後に到達した
    return 0;
  else if (w < W[i])  // 荷物が入らないならパス
    return rec(i + 1, w);
  else  // それ以外はメモして返す
    dp[i][w] = max(rec(i + 1, w), rec(i + 1, w - W[i]) + V[i]);
  return dp[i][w];
}

int main() {
  cin >> n >> w;
  for (int i = 0; i < n; i++) cin >> V[i] >> W[i];  // 一旦配列に突っ込む
  cout << rec(0, w) << endl;
}

