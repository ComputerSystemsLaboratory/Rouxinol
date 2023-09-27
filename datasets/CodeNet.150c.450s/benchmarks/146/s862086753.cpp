#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：
// 問題文URL：
// 所要時間：
// 学んだこと：
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
ld x[4],y[4];

void solve() {
  if ((y[1]-y[0])*(x[3]-x[2])==(x[1]-x[0])*(y[3]-y[2])){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ll n;
  cin >> n;
  rep(i,n){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    solve();
  }
  return 0;
}

