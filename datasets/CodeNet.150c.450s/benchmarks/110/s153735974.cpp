#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<stack>
#include<queue>
#include <map>
#include<cmath>
#include<vector>
#define MAX_N 1000000
#define INF 0x3f3f3f3f
#define SIZE 1000
using namespace std;



struct note
{
    int x, y;
}start, ende;
typedef pair<int, int> P;
int H, W, N;
char a[1003][1003];
int sum;
int d[1003][1003];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void bfs(note h, note m)
{
    memset(d, -1, sizeof(d));
    queue<P> que;
    que.push(P(h.x, h.y));
    d[h.x][h.y] = 0;
    while (!que.empty())
    {
        P p = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = p.first + dx[i];
            int yy = p.second + dy[i];
            if (xx >= 0 && xx < H && yy >= 0 && yy < W && a[xx][yy] != 'X' && d[xx][yy] == -1)
            {
                d[xx][yy] = d[p.first][p.second] + 1;
                que.push(P(xx, yy));
            }
        }
    }
    sum += d[m.x][m.y];
    start = ende;
}
void solve()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == 'S')
            {
                start.x = i;
                start.y = j;
                i = H;
                j = W;
            }
        }
    }
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (a[i][j] == k + 49)
                {
                    ende.x = i;
                    ende.y = j;
                    bfs(start, ende);
                    i = H;
                    j = W;
                }
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    cin >> H >> W >> N;
    for (int i = 0; i < H; i++)
    {
        cin >> a[i];
    }
    sum = 0;
    solve();
    return 0;
}