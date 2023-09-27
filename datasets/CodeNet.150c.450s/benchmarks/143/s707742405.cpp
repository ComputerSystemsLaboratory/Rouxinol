#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1 << 29;
const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    // 値：個数のmap
    map<long long, long long> mp;
    long long a;
    rep(i, n) {
        cin >> a;
        mp[a] += 1;
    }

    int q;
    cin >> q;

    // 最初に全ての和を求めておく
    long long sum = 0;
    for (auto itr : mp) {
        sum += itr.first * itr.second;
    }

    // Q回操作
    int b, c;
    rep(i, q) {
        cin >> b >> c;

        //  値Cの個数に値Bの個数を足して値Bの個数を0にする
        long long num_b;
        num_b = mp[b];
        mp[c] += num_b;
        mp[b] = 0;

        // sumの更新をする
        sum += (c - b) * num_b;
        cout << sum << endl;
    }
}
