#include<bits/stdc++.h>
using namespace std;

int memo[110][100];
int mat[110][2];

int dfs(int l, int r) {
    if (l + 1 >= r) return 0;
    if (memo[l][r]) return memo[l][r];

    int mi = 1000000007;
    for (int i = l + 1; i < r; ++i) {
        mi = min(mi, dfs(l, i) + dfs(i, r) + mat[l][0] * mat[i][0] * mat[r - 1][1]);
    }
    return memo[l][r] = mi;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> mat[i][0] >> mat[i][1];
    }
    cout << dfs(0, n) << "\n";
    return 0;
}