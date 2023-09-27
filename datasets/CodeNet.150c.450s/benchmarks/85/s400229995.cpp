#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

ll rec(int left, int right, vector<vector<ll> > &dp, vector<int> &R, vector<int> &C) {
    int N = dp.size();
    if (dp.at(left).at(right) != LLONG_MAX) {
        return dp.at(left).at(right);
    }
    if (left == right) {
        return dp.at(left).at(right) = 0;
    }
    ll res = LLONG_MAX;
    for (int i = left; i < right; ++i) {
        res = min(res, rec(left, i, dp, R, C) + rec(i + 1, right, dp, R, C) + 1LL * R.at(left) * C.at(i) * C.at(right));
    }
    return dp.at(left).at(right) = res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> R(N), C(N);
    for (int i = 0; i < N; ++i) {
        cin >> R.at(i) >> C.at(i);
    }

    vector<vector<ll> > dp(N, vector<ll>(N, LLONG_MAX));

    cout << rec(0, N - 1, dp, R, C) << endl;

    return 0;
}
