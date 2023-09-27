#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define INF 1000000000000000000
typedef pair<ll, ll> pll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) { cin >> A[i]; }

    vector<ll> dp;
    rep(i, N) {
        int j = lower_bound(all(dp), A[i]) - dp.begin();
        if (j == dp.size()) {
            dp.push_back(A[i]);
        } else {
            dp[j] = A[i];
        }
    }

    cout << dp.size() << endl;
}
