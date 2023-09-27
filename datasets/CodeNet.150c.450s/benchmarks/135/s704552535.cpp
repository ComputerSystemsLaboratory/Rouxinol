#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

void solve(int N, int M) {
    vector<int> H(1), W(1);
    rep(i, N) {
        int a; cin >> a;
        H.push_back(H.back() + a);
    }
    rep(i, M) {
        int a; cin >> a;
        W.push_back(W.back() + a);
    }
    map<int, int> mp;
    rep(i, N) for(int j = i + 1; j < N + 1; ++j) {
        mp[H[j] - H[i]]++;
    }
    int ans = 0;
    rep(i, M) for(int j = i + 1; j < M + 1; ++j) {
        ans += mp[W[j] - W[i]];
    }
    cout << ans << '\n';
}

int main() {
    int N, M;
    while(cin >> N >> M) {
        if(!N) break;
        solve(N, M);
    }
    return 0;
}

