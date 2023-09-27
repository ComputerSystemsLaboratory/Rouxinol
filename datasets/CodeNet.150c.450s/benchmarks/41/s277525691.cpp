#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
#define vvll vector<vector<long long>>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：全点対間最短経路
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_C
// 所要時間：1時間
// 学んだこと：
//  負辺を含む場合の扱い．INFの値が小さすぎて一回WAした．
//  テキストに「辺 ik と kj の存在を条件に加えること」とありましたが，辺ではなくて経路ではないでしょうか？
//  辺という言葉に経路という意味が含有されていたら申し訳ありません．
// ------------------

// ----ここから本問のソースコード----
const ll INF = 100100100100000;
const ll V_MAX = 110;

// グローバル変数（入力）
ll v, D[V_MAX][V_MAX];

void init() {
  rep(i, V_MAX) {
    rep(j, V_MAX) {
      if (i != j) {
        D[i][j] = INF;
      } else {
        D[i][j] = 0;
      }
    }
  }
}

// Dを出力する
void printD() {
  rep(i, v) {
    rep(j, v) {
      if (D[i][j] == INF) {
        cout << "INF";
      } else {
        cout << D[i][j];
      }
      if (j != v - 1) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }
}

// 入力
void input() {
  cin >> v;
  ll e;
  cin >> e;
  init();
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    D[s][t] = d;
  }
}

void solve() {
  // ワーシャルフロイド
  rep(k, v) {
    rep(i, v) {
      rep(j, v) {
        if (D[i][k] != INF && D[k][j] != INF) {
          D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
        }
      }
    }
  }

  // 負の閉路判定
  bool NC = false; // NegativeCycle
  rep(i, v) {
    if (D[i][i] < 0) {
      NC = true;
      break;
    }
  }
  if (NC) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    printD();
  }
}

int main() {
  input();
  solve();
  return 0;
}

