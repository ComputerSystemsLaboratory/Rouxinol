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
    ostringstream os;
    int r, c;
    cin >> r >> c;
    int a[r+1][c+1];
    REP(i, r+1)
        REP(j, c+1)
            a[i][j] = 0;
    REP(i, r)
        REP(j, c){
            cin >> a[i][j];
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            a[r][c] += a[i][j];
        }

    REP(i, r+1){
        REP(j, c)
            cout << a[i][j] << " ";
        cout << a[i][c] << endl;
    }

    return 0;
}