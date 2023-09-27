#include <bits/stdc++.h>
#include <numeric>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ul = unsigned long long;
using ld = long double;
using P = pair<int, int>;

int main()
{
    const int NumOfKindOfContestType = 26;  // タイプ1～26

    int D; cin >> D;    // 本番ではD = 365

    vector<int> c(NumOfKindOfContestType);
    rep(i, NumOfKindOfContestType) cin >> c[i];

    vector<vector<int>> s(D, vector<int>(NumOfKindOfContestType));
    rep(i, D)rep(j, NumOfKindOfContestType) cin >> s[i][j];

    vector<int> t(D);
    //rep(i, D) cout << t[i] << endl;
    rep(i, D)
    {
        cin >> t[i];
        t[i]--;
    }

    vector<int> last(26, -1);
    ll v = 0;
    rep(d, D)
    {
        v += s[d][t[d]]; // コンテスト開催による満足度の増加
        last[t[d]] = d;  // 指定タイプのコンテストを開催した最後の日

        // 特定のタイプのコンテストが開催されないと、日々、満足度が下がる
        rep(i, NumOfKindOfContestType) v -= c[i] * (d - last[i]);

        cout << v << endl;
    }

    return 0;
}
