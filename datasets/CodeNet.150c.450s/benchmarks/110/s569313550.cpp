#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

int H, W, N;
char map[1024][1024];
int dist[1024][1024];
int factories[10];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int from, int to)
{
    queue<int> q;
    q.push(from);
    dist[from / W][from % W] = 0;
    int fx = to % W;
    int fy = to / W;
        
    while (!q.empty())
    {
        int x = q.front() % W;
        int y = q.front() / W;
        q.pop();
        if (x == fx && y == fy)
        {
            return dist[fy][fx];
        }
        for (int d = 0; d < 4; ++d)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (0 <= nx && nx < W && 0 <= ny && ny < H &&
                map[ny][nx] != 'X' && dist[ny][nx] == -1)
            {
                q.push(ny * W + nx);
                dist[ny][nx] = dist[y][x] + 1;
            }
        }
    }
    
}

void solve()
{
    int result = 0;
    for (int i = 0; i < N; ++i)
    {
        memset(dist, -1, sizeof dist);
        result += bfs(factories[i], factories[i + 1]);
    }
    cout << result << endl;
}

int main()
{
    cin >> H >> W >> N;
    for (int h = 0; h < H; ++h)
    {
        for (int w = 0; w < W; ++w)
        {
            cin >> map[h][w];
            if (isdigit(map[h][w]))
            {
                factories[map[h][w] - '0'] = h * W + w;
            }
            if (map[h][w] == 'S')
            {
                factories[0] = h * W + w;
            }
        }
    }
	solve();
    return 0;
}