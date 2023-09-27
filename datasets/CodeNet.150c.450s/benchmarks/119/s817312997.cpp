//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int w, h;
int field[51][51];

int dx[]{1, 0, -1, 0, 1, -1, 1, -1};
int dy[]{0, 1, 0, -1, 1, -1, -1, 1};

void dfs(int x, int y) {
    field[x][y] = 0;
    for(int i=0; i<8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0&&nx<h&&ny>=0&&ny<w&&field[nx][ny]==1) dfs(nx, ny);
    }
}

signed main()
{
    while(cin>>w>>h, w) {
        for(int i=0; i<h; ++i)
            for(int j=0; j<w; ++j) field[i][j] = 0;
        for(int i=0; i<h; ++i) {
            for(int j=0; j<w; ++j) {
                cin >> field[i][j];
            }
        }

        int ans = 0;
        for(int i=0; i<h; ++i) {
            for(int j=0; j<w; ++j) {
                if(field[i][j]==1) {
                    ans++;
                    dfs(i, j);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}