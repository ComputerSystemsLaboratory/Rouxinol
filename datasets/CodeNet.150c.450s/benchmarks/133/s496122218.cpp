// 6/28 リアルタイム参加
#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int c[26];
int s[365][26];

int main() {
    int D;
    cin >> D;
    
    // 入力
    // vector<int> c(26);
    rep(i, 26) cin >> c[i];
    // vector<vector<int>> s(D, vector<int>(26));
    rep(i, D) rep(j, 26) cin >> s[i][j];
    
    // 出力
    vector<int> t(D);
    rep(i, D) {
        cin >> t[i];
        t[i]--;
    }

    // i番目のコンテストを最後に開催した日
    vector<int> last(26, -1);

    // スコア
    ll score = 0;

    // cout << "here?" << endl;

    // スコア計算
    for (int d = 0; d < D; d++) {
        // t[d]のコンテストが開催される
        int id = t[d];
        last[id] = d;

        // 満足度アップ
        score += s[d][id];  // 日にち・コンテスト

        // 満足度ダウン
        rep(i, 26) {
            score -= c[i] * (d - last[i]);
        }

        cout << score << endl;
    }

}