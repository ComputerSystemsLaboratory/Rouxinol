#include <cstdio>
#include <queue> 

using namespace std;

#define EMPTY '.'
#define OBSTACLE 'X'
#define INF 0x7fffffff

typedef pair<int, int> Coor;

int h, w, n;
char map[1000][1000];
int cost[1000][1000];

int bfs(Coor start, Coor end) {
    queue<Coor> q;

    fill((int*)cost, (int*)(((char*)cost)+sizeof(cost)), INF);

    cost[start.second][start.first] = 0;
    q.push(start);
    while (!q.empty()) {
        Coor c = q.front();q.pop();
        int x = c.first;
        int y = c.second;
        int dx[] = {-1,  0, 1, 0};
        int dy[] = { 0, -1, 0, 1};

        for (int i=0; i<4; i++) {
            int x2 = x + dx[i];
            int y2 = y + dy[i];

            if (x2 < 0 || w <= x2 || y2 < 0 || h <= y2) continue;
            if (map[y2][x2] == 'X') continue;
            if (cost[y2][x2] != INF) continue;

            cost[y2][x2] = cost[y][x] + 1;
            if (make_pair(x2, y2) == end) return cost[y2][x2];
            q.push(make_pair(x2, y2));
        }
    }
}

int main() {
    Coor start[10];
    unsigned int sum = 0;
 
    scanf("%d %d %d", &h, &w, &n);
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char c;
 
            scanf(" %c", &c);
            if (c == 'S') {
                start[0].first = j;
                start[0].second = i;
            } else if (c != 'X' && c != '.') {
                int ind = c - '0';
                start[ind].first = j;
                start[ind].second = i;
            }

            map[i][j] = c;
        }
    }

    for (int i=0; i<n; i++) {
        sum += (unsigned int)bfs(start[i], start[i+1]);
    }            

    printf("%u\n", sum);
}