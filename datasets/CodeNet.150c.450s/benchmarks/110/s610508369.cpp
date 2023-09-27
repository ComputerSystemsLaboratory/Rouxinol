#include <iostream>
#include <queue>
#include <map>

using namespace std;

typedef pair<int, int> pii;

// ?????°
constexpr int MAX_SCALE = 1010;
constexpr int INF = 1000;

// input
int height, width, max_search_num;
int sx, sy;
int gx, gy;
char maze[MAX_SCALE][MAX_SCALE];

// ???????????§??????????????¢?????????
int d[MAX_SCALE][MAX_SCALE];

int ans = 0;

int bfs(pii relay_pos, int num)
{
    // init
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            d[y][x] = INF;
            if (maze[y][x] == num + '0') {
                gx = x; gy = y;
            }
        }
    }

    // ??????????¨??????????
    queue<pii> que;
    que.push(relay_pos);
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};

    // start??°???
    d[relay_pos.second][relay_pos.first] = 0;

    while (!que.empty()) {
        pii p = que.front(); que.pop();

        if (p.first == gx && p.second == gy) {
            break;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if (nx >= 0 && nx < width && ny >= 0 && ny < height && maze[ny][nx] != 'X' && d[ny][nx] == INF) {
                que.push(pii(nx, ny));
                d[ny][nx] = d[p.second][p.first] + 1;
            }
        }
    }

    ans += d[gy][gx];

    if (num != max_search_num) bfs(pii(gx, gy), num + 1);

    return ans;
}

void solve()
{
    int res = bfs(pii(sx, sy), 1);

    cout << res << endl;
}

int main()
{
    cin >> height >> width >> max_search_num;

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cin >> maze[y][x];
            if (maze[y][x] == 'S') {
                sx = x; sy = y;
            }
        }
    }

    solve();
    
    return 0;
}