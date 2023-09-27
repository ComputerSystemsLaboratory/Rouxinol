#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <utility>
#include <algorithm>
#include <functional>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;
using qi = queue<int>;
using Graph = vector<vector<int>>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define REP(i,n) for(int i=0;i<n;i++)

ll dp(int* r, int* c, int n) {
    ll table[n][n];
    REP(i, n) table[i][i] = 0;
    FOR(i, 1, n) {
        REP(j, n-i) {
            table[j][j+i] = table[j][j+i-1] + r[j]*c[j+i-1]*c[j+i];
            FOR(k, j, j+i) {
                table[j][j+i] = min(table[j][k] + r[j]*c[k]*c[j+i] + table[k+1][j+i], table[j][j+i]);
            }
        }
    }
    return table[0][n-1];
}

int main () {
	cin.tie(0);
   	ios::sync_with_stdio(false);

    int n; cin >> n;
    int r[n], c[n];
    REP(i, n) {
        cin >> r[i] >> c[i];
    }

    // a に含まれる n 個の値で k を作ったときの最大値は何か
    int table = dp(r, c, n);

    cout << table << "\n";
}
