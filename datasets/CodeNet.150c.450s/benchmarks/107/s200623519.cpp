#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define FORR(x, arr) for (auto& x : arr)
#define ITR(x, c) for (__typeof(c.begin()) x = c.begin(); x != c.end(); x++)
#define ALL(a) (a.begin()), (a.end())
#define ZERO(a) memset(a, 0, sizeof(a))
#define MINUS(a) memset(a, 0xff, sizeof(a))
//-------------------------------------------------------

string s1, s2;
int dp[1145][1145];

int rec(int i, int j) {
    // cout << i << " " << j << endl;
    if (i > s1.size() || j > s2.size()) {
        return 1 << 20;
    }
    if (j == 0) {
        return i;
    }
    if (i == 0) {
        return j;
    }

    if (dp[i][j] >= 0) {
        return dp[i][j];
    } else {
        int x = 1 << 20;
        if (s1[i - 1] == s2[j - 1]) {
            x = min(x, rec(i - 1, j - 1));
        }
        x = min(x, rec(i - 1, j) + 1);
        x = min(x, rec(i, j - 1) + 1);
        x = min(x, rec(i - 1, j - 1) + 1);

        dp[i][j] = x;
        return x;
    }
}

void solve() {
    cin >> s1 >> s2;
    MINUS(dp);
    dp[0][0] = 0;
    cout << rec(s1.size(), s2.size()) << endl;
    /*
    REP(i, 7) {
        REP(j, 7) { cout << dp[i][j] << "\t"; }
        cout << endl;
    }
    */
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

