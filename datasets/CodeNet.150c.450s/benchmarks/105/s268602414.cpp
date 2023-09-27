#include <bits/stdc++.h>
using namespace std;
using Int = long long;
template <class T> void chmin(T& x, T y) { if (x > y) x = y; }
int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<Int> A(N); for (auto &a : A) cin >> a;
        string S; cin >> S;
        vector<Int> base;
        int ans = 0;
        for (int i = N - 1; i >= 0; i--) {
            Int x = A[i];
            for (auto b : base) chmin(x, x ^ b);
            if (x != 0) {
                if (S[i] == '0') base.push_back(x);
                else { ans = 1; break; }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}