#include <algorithm>
#include <iostream>
#include <set>
#include <utility>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int N, M;
int D[100005], P[100005];
void solve() {
    vector<pair<int, int>> vec;
    rep(i, N) vec.push_back(make_pair(P[i], D[i]));
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int ans = 0;
    for (auto e : vec) {
        if (e.second < M) {
            M -= e.second;
        } else {
            ans += e.first * (e.second - M);
            M = 0;
        }
    }

    cout << ans << endl;
}
int main() {
    while (cin >> N >> M, N) {
        rep(i, N) cin >> D[i] >> P[i];
        solve();
    }
}