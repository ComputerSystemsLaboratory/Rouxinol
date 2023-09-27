#include <iostream>
#include <string>
#include <utility>
#include <queue>

constexpr int INF = 1000000000;
using Pair = std::pair<int, int>;
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

int h, w, n;
std::string map[1010];
int cost[1010][1010];
Pair pts[10];

int bfs(Pair st, Pair en) {
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            cost[i][j] = INF;
        }
    }
    cost[st.first][st.second] = 0;

    std::queue<Pair> que;
    que.push(st);

    while(!que.empty()) {
        auto p = que.front(); que.pop();

        for(int i = 0; i < 4; ++i) {
            int py = p.first + dy[i], px = p.second + dx[i];

            if(py < 0 || px < 0 || py >= h || px >= w)
                continue;

            if(map[py][px] == '.' && cost[py][px] == INF) {
                que.push({py, px});
                cost[py][px] = cost[p.first][p.second] + 1;
            }
        }
    }

    return cost[en.first][en.second];
}

int main() {
    std::cin >> h >> w >> n;

    for(int i = 0; i < h; ++i) {
        std::cin >> map[i];

        for(int j = 0; j < w; ++j) {
            if(map[i][j] != '.' && map[i][j] != 'X') {
                int idx = (map[i][j] == 'S' ? 0 : map[i][j] - '0');

                pts[idx] = {i, j};
                map[i][j] = '.';
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans += bfs(pts[i - 1], pts[i]);
    }

    std::cout << ans << std::endl;
}