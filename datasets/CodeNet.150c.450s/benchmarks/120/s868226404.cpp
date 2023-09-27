#include <iostream>
using namespace std;

const int MAX_R = 10, MAX_C = 10000;
int R, C;
int grid[MAX_R+5][MAX_C+5];
int bit[MAX_R+5];

int count() {
    int ret = 0;
    for(int i = 0; i < C; i++) {
        int tmp = 0;
        for(int j = 0; j < R; j++) {
            if((bit[j]&&grid[j][i]) || (!bit[j]&&!grid[j][i])) tmp++;
        }
        ret += max(tmp, R-tmp);
    }
    return ret;
}

int solve() {
    int ans = 0;
    for(int i = 0; i < 1<<R; i++) {
        for(int j = 0; j < R; j++) {
            bit[j] = (i >> j)%2;
        }
        ans = max(ans, count());
    }
    cout << ans << endl;
    return 0;
}

int main() {
    while(true) {
        cin >> R >> C;
        if(!R && !C) break;
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                cin >> grid[i][j];
            }
        }
        solve();
    }
    return 0;
}