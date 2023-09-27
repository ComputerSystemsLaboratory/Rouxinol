//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

signed main()
{
    int h, w;
    while(cin>>w>>h, w) {
        char field[h+1][w+1];
        int sx, sy;
        for(int i=0; i<h; ++i) {
            for(int j=0; j<w; ++j) {
                char c;
                cin >> c;
                if(c=='@') {
                    sx = i;
                    sy = j;
                }
                field[i][j] = c;
            }
        }

        queue<pair<int, int> > q;
        q.push(make_pair(sx, sy));
        int ans = 0;
        while(!q.empty()) {
            ans++;
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            for(int i=0; i<4; ++i) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx>=0&&nx<h&&ny>=0&&ny<w&&field[nx][ny]=='.') {
                    q.push(make_pair(nx, ny));
                    field[nx][ny] = '#';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}