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
    int n;
    cin >> n;
    int room[4][3][10] = {0};
    REP(i, n) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        room[b-1][f-1][r-1] += v;
    }
    REP(i, 4){
        REP(j, 3){
            REP(k, 10)
                cout << " " << room[i][j][k];
            cout << endl;
        }
        if (i == 3)
            break;
        cout << "####################" << endl;
    }

    return 0;
}