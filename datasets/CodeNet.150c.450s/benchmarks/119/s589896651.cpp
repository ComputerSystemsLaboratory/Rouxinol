#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int w, h;
vector< vector<int> > c, island;

int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

void dfs(int x, int y, int id) {

    island[y][x] = id;

    for(int i = 0; i < 8; i++) {

        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx >= w || ny < 0 || ny >= h)
            continue;

        if(c[ny][nx] == 1 && island[ny][nx] != id)
            dfs(nx, ny, id);

    }

}

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int ans;

    while(cin >> w >> h && w) {

        c.assign(h, vector<int>(w));
        island.assign(h, vector<int>(w, -1));
        ans = 0;

        for(int y = 0; y < h; y++)
            for(int x = 0; x < w; x++)
                cin >> c[y][x];

        for(int x = 0; x < w; x++)
            for(int y = 0; y < h; y++)
                if(c[y][x] == 1 && island[y][x] == -1) {
                    dfs(x, y, ans);
                    ans++;
                }

        cout << ans << endl;

    }
}