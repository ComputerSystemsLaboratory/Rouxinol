#include <stdlib.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

using Point = pair<int, int>;

const int MAXN = 1000;
const int INF = 0x3f3f3f3f;
const int STEP_NUM = 4;
const int STEP[STEP_NUM][STEP_NUM] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int h, w, n;
char field[MAXN + 1][MAXN + 1];

int BFS(Point start, Point goal) {
    int start_x = start.first;
    int start_y = start.second;
    int goal_x = goal.first;
    int goal_y = goal.second;
    int dist[MAXN][MAXN];
    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w; j++) {
            dist[i][j] = INF;
        }
    }
    queue<Point> queue;
    queue.emplace(start_x, start_y);
    dist[start_x][start_y] = 0;

    while (queue.size()) {
        auto point = queue.front();
        queue.pop();
        if (point == make_pair(goal_x, goal_y)) { break; }
        for (size_t i = 0; i < STEP_NUM; i++) {   
            int new_x = point.first + STEP[i][0];
            int new_y = point.second + STEP[i][1];
            if (0 <= new_x && new_x < h && 0 <= new_y && new_y < w
                && field[new_x][new_y] != 'X' && dist[new_x][new_y] == INF) {
                queue.emplace(new_x, new_y);
                dist[new_x][new_y] = dist[point.first][point.second] + 1;
            }
        }
    }

    return dist[goal_x][goal_y];
}

int main() {
    scanf("%d %d %d\n", &h, &w, &n);
    Point start;
    vector<Point> goals(n + 1);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%c", &field[i][j]);
            switch (field[i][j]) {
                case 'S':
                    goals[0] = make_pair(i, j);
                    break;
                case '.':
                case 'X':
                    break;
                default:
                    goals[field[i][j] - '0'] = make_pair(i, j);
            }
        }
        getchar();
    }

    int best_time = 0;
    for (int i = 0; i < n; i++) {
        best_time += BFS(goals[i], goals[i + 1]);
    }
    printf("%d\n", best_time);

    return 0;
}