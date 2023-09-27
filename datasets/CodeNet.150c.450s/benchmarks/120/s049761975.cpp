#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < n; i++)
#define ALL(obj) obj.begin(), obj.end()

template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

const int iINF = 1e9;
const long long llINF = 1e18;
const int MOD = 1e9 + 7;

using namespace std;

int o[20][10010];

void solve(int r, int c) {
    REP(i, r) {
        REP(j, c) { cin >> o[i][j]; }
    }

    int ans = 0;

    REP(ss, 1 << r) {
        int sum = 0;
        REP(i, c) {
            int tmp = 0;
            REP(j, r) {
                if ((ss >> j) & 1) {
                    if (o[j][i] == 0) {
                        tmp += 1;
                    }
                } else {
                    if (o[j][i] == 1) {
                        tmp += 1;
                    }
                }
            }
            sum += max(tmp, r - tmp);
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int main() {
    int r, c;
    while (cin >> r >> c && r) {
        solve(r, c);
    }
    return 0;
}
