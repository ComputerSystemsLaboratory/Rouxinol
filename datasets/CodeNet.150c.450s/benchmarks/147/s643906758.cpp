#include <bits/stdc++.h>
using namespace std;

#define loop(i, a, b) for (long long i = (a); i < (b); ++i)
#define rep(i, n) for (long long i = 0; i < n; ++i)
#define dump(a) cerr << #a << " = " << (a) << "(L:" << __LINE__ << ")" << endl

void solve(long long N) {
    vector<vector<int>> cnt(10001, vector<int>(5));
    loop (a, 1, 10001) {
        loop (b, a, 10001) {
            if (a * a + b * b + 1 * 1 + a * b + b * 1 + a * 1 > N) break;
            loop (c, b, 10001) {
                if (a * a + b * b + c * c + a * b + b * c + a * c > N) break;
                auto n = a * a + b * b + c * c + a * b + b * c + a * c;
                auto idx = (a == b) + (b == c) + (a == c);
                cnt[n][idx]++;
            }
        }
    }

    loop (i, 1, N+1) {
        cout << cnt[i][0] * 6 + cnt[i][1] * 3 + cnt[i][3] << endl;
    }
}

int main() {
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
