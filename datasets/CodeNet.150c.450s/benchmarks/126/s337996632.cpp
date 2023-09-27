#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <sstream>
#include <deque>

#define REP(i, n) for ( int i = 0; i < n; i++ )
#define FIELD_SIZE 17

using namespace std;

int main() {
    int w, h;
    
    while(cin >> w >> h, w||h) {
        int n, o[40][40];
        int dp[FIELD_SIZE][FIELD_SIZE] = {0};

        // 障害物の初期化
        REP(i, 40) REP(j, 40) o[i][j] = 1;

        cin >> n;

        REP(i, n) {
            int x, y;
            cin >> x >> y;
            o[x][y] = 0;
        }

        // 縦横の縁は必ず1通り(障害物を除く)
        dp[1][1] = 1;

        // 障害物が無ければ上と左のマスを足していく
        // ※上下反転してます
        for ( int y = 1; y <= h; y++ ) {
            for ( int x = 0; x < w; x++ ) {
                if ( y == 1 && x == 0 ) continue; //最初の座標は無視
                if ( o[x+1][y] ) dp[x+1][y] = dp[x][y] + dp[x+1][y-1];
            }
        }

        // REP(i, h+1) {
        //     REP(j, w+1) {
        //         if ( i == h && j == w ) cout << "'" << dp[j][i] << "'";
        //         else cout << dp[j][i] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        cout << dp[w][h] << endl;
    }
    
    return 0;
}