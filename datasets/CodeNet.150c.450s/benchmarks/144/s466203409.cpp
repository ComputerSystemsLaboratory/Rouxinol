#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <vector>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    long long a[n][m];
    long long b[m][l];
    long long res[n][l];
    REP(i, n)
        REP(j, l)
            res[i][j] = 0;
    REP(i, n)
        REP(j, m)
            cin >> a[i][j];
    REP(i, m)
        REP(j, l)
            cin >> b[i][j];
    REP(i, n)
        REP(j, l)
            REP(k, m)
                res[i][j] += (a[i][k] * b[k][j]);

    REP(i, n){
        REP(j, l-1)
            cout << res[i][j] << " ";
        cout << res[i][l-1] << endl;
    }


    return 0;
}