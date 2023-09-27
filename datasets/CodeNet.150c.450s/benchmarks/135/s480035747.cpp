#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i=0;i<int(n);++i)
#define FOR(i, a, b) for(int i=int(a);i<int(b);++i)

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    int N, M;
    while (cin >> N >> M, N | M) {
        vector<int> h(N), w(M);
        REP(i, N) cin >> h[i];
        REP(i, M) cin >> w[i];

        unordered_map<int, int> width_counts;
        REP(left, M) {
            int sum = 0;
            FOR(right, left, M) {
                sum += w[right];
                width_counts[sum] += 1;
            }
        }

        long long ans = 0;
        REP(top, N) {
            int sum = 0;
            FOR(bottom, top, N) {
                sum += h[bottom];
                ans += width_counts[sum];
            }
        }

        cout << ans << "\n";
    }
}