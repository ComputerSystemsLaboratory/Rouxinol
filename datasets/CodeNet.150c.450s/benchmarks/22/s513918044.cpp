#include <bits/stdc++.h>
#include <cmath>
#include <numeric>
using namespace std;
#define rep(i,a,b) for(int64_t i=(a); i<(b); ++i) // a ≦ i < b 
#define Rrep(i,a,b) for(int64_t i=(a);i>=(b);--i) // reverse repeat. a から b まで減少．
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend() //逆イテレータ
#define RANGE(a,b,c) (a).begin()+b,(a).begin()+c // コンテナ a の 要素 b から c へのイテレータ
#define MOD 1000000007
#define INF 1000000000
typedef pair<int64_t, int64_t> PII;
typedef vector<int64_t> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<PII> VP;

struct edge {int from, to, cost;};

template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b; return true;} return false;}

int main() {
cin.tie(0);
ios::sync_with_stdio(false);

// 単一始点最短経路
// 始点 s
int V, E, s; cin >> V >> E >> s;
vector<edge> edges; // 辺の集合
rep(i, 0, E){
    edge add;
    cin >> add.from >> add.to >> add.cost;
    edges.push_back(add);
}
VI d(V, INF); // d[i] = 頂点 s から i への最短距離
d[s] = 0;

// 負の閉路検出
rep(i, 0, V)
    for (edge e : edges)
        if (d[e.from] != INF && chmin(d[e.to], d[e.from] + e.cost))
            if (i == V - 1) {
                cout << "NEGATIVE CYCLE\n";
                return 0;
            }

for (int i : d) {
    if (i == INF) cout << "INF\n";
    else cout << i << "\n";
}

}

// 境界，出力文字列 チェック
// 可読性優先．高速化次点．
// まずは全探索，分割統治，次にDP
// 制限を見る．境界に注意．求めたい量の変域．
// 偶奇，逆から，ソート，出現回数，出現位置，DP， 余事象，包除
// データ構造． 問題の特徴量．単調性，二分探索
// 存在判定：構成方法，入力の特徴
// gcd, lcm ,素因数分解．
// 例外を十分に含む一般化．想像力の限界
// 小さい系から例示
// 代数的処理
// 始めは過剰に例示・場合分けしてもいい．各場合を確実に対処．
// 自明な例から処理，除外．
// 小数のときは，精度の設定する．doubel 変数に数値を入力するときは 123. とする．
// テストケース作成は数表あり


