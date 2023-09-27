#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A) cin >> x;

    vector<int> dp(N, INT_MAX);
    for (int i = 0; i < N; ++i) {
        int pnt = lower_bound(dp.begin(), dp.end(), A.at(i)) - dp.begin();
        dp.at(pnt) = A.at(i);
    }

    cout << lower_bound(dp.begin(), dp.end(), INT_MAX) - dp.begin() << endl;

    return 0;
}
