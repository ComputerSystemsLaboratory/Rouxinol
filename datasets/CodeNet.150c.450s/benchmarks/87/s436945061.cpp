#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

int main(){
    int H;
    while(cin >> H && H > 0) {
        int grid[55][55];
        int W = 5;
        REP(y, H) REP(x, W) cin >> grid[y][x];
        int ans = 0;
        REP(_, H * W) {
            bool d[55][55] = {};
            REP(y, H) {
                int c = 1;
                for(int x = 1; x < W; x++) {
                    if(grid[y][x] == grid[y][x - 1]) {
                        c++;
                        if(c >= 3) {
                            REP(i, c) {
                                d[y][x - i] = true;
                            }
                        }
                    } else {
                        c = 1;
                    }
                }
            }
            REP(y, H) REP(x, W) if(d[y][x]) ans += grid[y][x];
            REP(y, H) REP(x, W) if(d[y][x]) grid[y][x] = 0;
            REP(__, H * W) REP(y, H - 1) REP(x, W) if(grid[y][x] > 0 && grid[y + 1][x] == 0) swap(grid[y + 1][x], grid[y][x]);
        }
        cout << ans << endl;
    }
    return 0;
}