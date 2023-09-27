#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
const long long INF = 1LL<<60; //仮想的な無限大の値
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 入力
    int N, K;
    while (cin >> N >> K) {
        if(N == 0) break;
        vector<long long> a(N);
        for (int i = 0; i < N; ++i) cin >> a[i];

        // 累積和を前計算
        vector<int> s(N+1, 0);
        for (int i = 0; i < N; i++) s[i+1] = s[i] + a[i];
        
        // 答えを求める
        long long res = -INF;
        for (int i = 0; i <= N-K; i++) {
            long long val = s[K+i] - s[i];
            if (res < val) res = val;
        }
        cout << res << endl;
    }
    return 0;
}

