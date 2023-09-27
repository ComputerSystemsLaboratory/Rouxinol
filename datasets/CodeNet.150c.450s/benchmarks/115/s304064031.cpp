#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int MAX_LEN = 1'000;
int dp[MAX_LEN][MAX_LEN];

void set_val(int i, int j, int inc) {
    int val = inc;
    if (i > 0 && j > 0) {
        int tmp = dp[i-1][j-1] + inc;
        val = max(val, tmp);
    }
    if (i > 0) {
        int tmp = dp[i-1][j];
        val = max(val, tmp);
    }
    if (j > 0) {
        int tmp = dp[i][j-1];
        val = max(val, tmp);
    }
    dp[i][j] = val;
    //cout << i << " " << j << " " << val << endl;
}

int lcs(const string& x, const string& y) {
    int lx = x.length();
    int ly = y.length();
    for (int i=0; i<lx; ++i) {
        for (int j=0; j<ly; ++j) {
            if (x[i] == y[j]) {
                set_val(i, j, 1);
            } else {
                set_val(i, j, 0);
            }
        }
    }
    return dp[lx-1][ly-1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    string x, y;
    FOR(i,0,n) {
        cin >> x;
        cin >> y;
        cout << lcs(x, y) << endl;
    }

    return 0;
}