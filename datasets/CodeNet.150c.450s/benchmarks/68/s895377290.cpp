#include <bits/stdc++.h>

#define REP(i, n) for(decltype(n) i = 0; i < n; i++)

#define ALL(c)   c.begin(), c.end()
#define SORT(c)  std::sort(ALL(c))
#define RSORT(c) std::sort(ALL(c), std::greater<decltype(c)::value_type>())

using namespace std;
using ll = long long;

const int MOD  = (int)1e9 + 7;
const int INF  = (int)1e9 + 1;
const ll  LINF = (ll)1e18 + 1;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true) {
        int N;
        std::cin >> N;
        if(N == 0) break;

        vector<int> A(N);
        REP(i, N) {
            std::cin >> A[i];
        }

        SORT(A);

        int ans = INF;
        for(int i = 0; i < N - 1; i++) {
            ans = min(ans, abs(A[i] - A[i + 1]));
        }

        std::cout << ans << std::endl;
    }

    return 0;
}

