#include <iostream>
#include <vector>
using namespace std;

int w, h;

void dfs(vector<vector<short>>& masu, int x, int y) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (0 <= x+i && x+i < w && 0 <= y+j && y+j < h) {
                if (masu[y+j][x+i]) {
//                    cout << "#: x=" << x+i << ", y="  << y+j << endl;
                    masu[y+j][x+i] = 0;
                    dfs(masu, x+i, y+j);
                }
            }
        }
    }
}

int main(void) {
    while (cin >> w >> h, w) {
        vector<vector<short>> masu(h, vector<short>(w));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> masu[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (masu[i][j]) {
                    dfs(masu, j, i);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}