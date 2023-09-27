#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

struct state { int y, x, step; };
static const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int main() {
        int w, h;
        while (scanf("%d%d", &w, &h), w) {
                vector<string> s(h);
                for (int i = 0; i < h; i ++) cin >> s[i];
                int sy, sx;
                for (int i = 0; i < h; i ++) {
                        for (int j = 0; j < w; j ++) {
                                if (s[i][j] == '@') {
                                        sy = i, sx = j;
                                }
                        }
                }
                vector<vector<bool>> used(h, vector<bool>(w, false));
                queue<state> q;
                q.push({sy, sx, 0});
                used[sy][sx] = true;
                while (!q.empty()) {
                        state p = q.front(); q.pop();
                        for (int d = 0; d < 4; d ++) {
                                int xx = p.x + dx[d], yy = p.y + dy[d];
                                if (xx < 0 || xx >= w || yy < 0 || yy >= h) continue;
                                if (used[yy][xx] || s[yy][xx] == '#') continue;
                                used[yy][xx] = true;
                                q.push({yy, xx, p.step + 1});
                        }
                }
                int ans = 0;
                for (int i = 0; i < h; i ++) {
                        for (int j = 0; j < w; j ++) {
                                ans += used[i][j];
                        }
                }
                printf("%d\n", ans);
        }
        return 0;
}