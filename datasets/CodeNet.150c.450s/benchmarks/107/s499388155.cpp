#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define PI 3.14159265358979323846
#define v vector<long long>
using namespace std;
using ll = long long;

// ----本問について----
// 問題：編集距離
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_E
// 所要時間：1時間
// 学んだこと：
// ------------------

// ----ここから本問のソースコード----

const int N = 1010;

// グローバル変数（入力）
ll dp[N][N];
string s1, s2;

ll solve(ll i, ll j) {                     // メモ化再帰（？）
  if (dp[i][j] != -1) { return dp[i][j]; } // 計算済みならその値を返す

  //置換が必要か否かを示す変数
  ll cost = 1;
  if (i > 0 && j > 0 && s1[i - 1] == s2[j - 1]) { cost = 0; }

  // 場合に応じて計算
  if (i == 0 || j == 0) {
    dp[i][j] = i + j;
  } else {
    dp[i][j] = min(solve(i - 1, j) + 1,
                   min(solve(i, j - 1) + 1, solve(i - 1, j - 1) + cost));
  }

  return dp[i][j];
}

int main() {
  // cout << fixed << setprecision(10);
  cin >> s1;
  cin >> s2;
  ll l1 = s1.size();
  ll l2 = s2.size();
  rep(i, N) {
    rep(j, N) {
      dp[i][j] = -1; // dpを全部未計算(-1)に初期化
    }
  }
  cout << solve(l1, l2) << endl;

  return 0;
}

