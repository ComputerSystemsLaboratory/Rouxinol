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

int LSD(const string s1, const string s2){
    VVI Ldist(s1.size()+1, VI(s2.size()+1));
    rep(i, 0, s1.size()+1) Ldist[i][0] = i;
    iota(ALL(Ldist[0]), 0);

    rep(i, 1, s1.size()+1){
        rep(j, 1, s2.size()+1){
            Ldist[i][j] = min({Ldist[i-1][j] + 1 , Ldist[i][j-1] + 1, 
                                Ldist[i-1][j-1] + (s1[i-1] == s2[j-1] ? 0 : 1)});
        }
    }
    return Ldist[s1.size()][s2.size()];
}

int main() {
cin.tie(0);
ios::sync_with_stdio(false);

string s1, s2; cin >> s1 >> s2;

cout << LSD(s1, s2) << endl;
}

// 境界，出力文字列 チェック
// 可読性優先．高速化次点．
// まずは全探索，分割統治，次にDP
// 制限を見る
// 偶奇，逆から，ソート，出現回数，出現位置，DP， 余事象，包除
// データ構造． 問題の特徴量
// 存在判定：構成方法，入力の特徴
// gcd, lcm ,素因数分解．
// 例外を十分に含む一般化．想像力の限界
// 小さい系から例示
// 始めは過剰に例示・場合分けしてもいい．各場合を確実に対処．
// 自明な例から処理，除外．
// 小数のときは，精度の設定する．doubel 変数に数値を入力するときは 123. とする．
// テストケース作成は数表あり


