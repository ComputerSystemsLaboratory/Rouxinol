#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：Areas on the Cross-Section Diagram
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_D
// 所要時間：2時間
// 学んだこと：しんどかった．stackが便利なことはよくわかった．
//  stackを2つではなく1つでできないかと考えていたが，もう疲れたのでACしただけで満足することにした．
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
string terrain;
stack<ll> s;
stack<pair<ll, ll>> s2;
vll areas;

void solve() {
  ll area = 0;
  rep(i, terrain.size()) {
    if (terrain[i] == '\\') {
      s.push(i);  // 下りが来たらスタックに追加
    } else if (terrain[i] == '/') {
      if (!s.empty()) {
        ll j = s.top();
        area = i - j; // 対応する上りとの間でできる面積を計算
        // cout << "j:" << j << " i:" << i << " area:" << area << endl;
        s.pop();  // 対応する上りを取り除く
        if (!s2.empty()) {  // 水溜りの結合
          while (!s2.empty() && s2.top().first > j) {
            area += s2.top().second;
            s2.pop();
          }
        }
        s2.push(make_pair(j, area));  // 結合した水溜りを追加

        /*
        if (s.empty()) {
          areas.push_back(area);
          area = 0;
        }
        */
      }
    }
  }

  // 集計・出力
  // stackのままだと扱いにくいのでvectorにうつす
  while (!s2.empty()) {
    areas.push_back(s2.top().second);
    s2.pop();
  }
  reverse(areas.begin(), areas.end());
  ll k = areas.size();
  ll areaSum = 0;
  rep(i, k) { areaSum += areas[i]; }
  cout << areaSum << endl;
  if (k != 0) {
    cout << k << " ";
  } else {
    cout << k;
  }
  rep(i, k) {
    cout << areas[i];
    if (i != k - 1) { cout << " "; }
  }
  cout << endl;
}

int main() {
  cin >> terrain;
  solve();
  return 0;
}

