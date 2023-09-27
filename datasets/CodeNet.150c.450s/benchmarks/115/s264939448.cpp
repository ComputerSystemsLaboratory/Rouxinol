#include <bits/stdc++.h>
#define rep(i,j) for (int (i)=0;(i)<(int)(j);++(i))
#define put(i) cout << i << endl
using namespace std;
const int MAX = 1000;

int n;
string s1, s2;
int dp[MAX+1][MAX+1];

int rec(int x, int y) {
    if (dp[y][x] >= 0) {
        return dp[y][x];
    }
    int sz1 = s1.size(), sz2 = s2.size();
    int ret;
    if (x == sz1 || y == sz2) {
        ret = 0;
    }
    else if (s1[x] == s2[y]) {
        ret = rec(x+1, y+1)+1;
    }
    else {
        ret = max(rec(x+1, y), rec(x, y+1));
    }
    return dp[y][x] = ret;
}

void solve() {
    while (n--) {
        memset(dp, -1, sizeof(dp));
        cin >> s1 >> s2;
        cout << rec(0, 0) << endl;
    }
}

int main() {
    cin >> n;
    solve();
}