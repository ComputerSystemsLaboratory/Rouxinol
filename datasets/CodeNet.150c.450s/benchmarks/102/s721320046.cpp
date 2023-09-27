#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

#define REP(i,a,b) for(int i=int(a);i<int(b);i++)

using namespace std;

typedef long long int lli;
typedef pair<int,int> pii;

int main () {
    int W, H;
    while (cin >> H >> W, W + H) {
        vector<vector<char> > map(W + 2, vector<char>(H + 2, '#'));
        int sx, sy;
        REP (i, 1, W + 1) {
            REP (j, 1, H + 1) {
                cin >> map[i][j];
                if (map[i][j] == '@') {
                    sx = j;
                    sy = i;
                }
            }
        }
        queue<pii> q;
        q.push(make_pair(sx, sy));
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        vector<vector<bool> > check(W + 2, vector<bool>(H + 2, false));
        while (q.size()) {
            pii qq = q.front();
            q.pop();
            if (check[qq.second][qq.first]) continue;
            check[qq.second][qq.first] = true;
            REP (k, 0, 4) {
                int xx = qq.first + dx[k];
                int yy = qq.second + dy[k];
                if (map[yy][xx] == '#') continue;
                q.push(make_pair(xx, yy));
            }
        }
        int ans = 0;
        REP (i, 1, W + 1) REP (j, 1, H + 1) ans += check[i][j];
        cout << ans << endl;
    }

    return 0;
}