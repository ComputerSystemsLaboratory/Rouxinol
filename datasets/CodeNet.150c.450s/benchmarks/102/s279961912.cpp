#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <math.h>

#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
template<class T> using hset = unordered_set<T>;
template<class Key, class T> using hmap = unordered_map<Key, T>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool isOutOfBounds(int y, int x, int h, int w) {
    return y < 0 || y >= h || x < 0 || x >= w;
}

int main() {
    int W, H;
    vs room;

    int sy, sx;
    while (cin >> W >> H) {
        if (W == 0) break;

        room.resize(H);
        REP(y, H) {
            cin >> room[y];
            REP(x, W) {
                if (room[y][x] == '@') { sy = y; sx = x; room[y][x] = '#'; }
            }
        }

        queue<int> que;
        que.push(sy);
        que.push(sx);
        int y, x, cnt=1;
        while (!que.empty()) {
            y = que.front(); que.pop();
            x = que.front(); que.pop();

            for (int i=0; i<4; i++) {
                if (isOutOfBounds(y+dy[i], x+dx[i], H, W)) continue;
                if (room[y+dy[i]][x+dx[i]] == '#') continue;

                cnt++;
                room[y+dy[i]][x+dx[i]] = '#';
                que.push(y+dy[i]);
                que.push(x+dx[i]);
            }
        }

        cout << cnt << endl;
    }

    return 0;
}