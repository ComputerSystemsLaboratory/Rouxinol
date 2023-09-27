#include <stdio.h>  
#include <string.h>  
#include <queue>  
#define MAX_W 1000  
#define MAX_H 1000  
#define MAX_N 9  
  
using namespace std;  
  
char m[MAX_H][MAX_W + 1];  
int w, h, n;  
int gx[MAX_N + 1], gy[MAX_N + 1];  
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};  
  
int bfs(int sx, int sy, int gx, int gy)  
{  
    int d[MAX_H][MAX_W];  
    memset(d, -1, sizeof(d));  
    queue<int> que;  
    que.push(sx * w + sy);  
    d[sx][sy] = 0;  
          
    while(que.size())  
    {  
        int x = que.front()/w, y = que.front()%w;  
        que.pop();  
        if(x == gx && y == gy)  
            break;  
  
        for(int di = 0; di < 4; ++di){  
            int nx = x + dx[di], ny = y + dy[di];  
            if(nx >= 0 && nx < h && ny >= 0 && ny < w && 'X' != m[nx][ny] && -1 == d[nx][ny]){  
                d[nx][ny] = d[x][y] + 1;  
                que.push(nx * w + ny);  
            }  
        }  
    }  
    return d[gx][gy];  
}  
  
void solve()  
{  
    int ans = 0;  
    for(int i = 0; i < n; i ++)  
        ans += bfs(gx[i], gy[i], gx[i + 1], gy[i + 1]);  
    printf("%d\n", ans);  
}  
  
int main()  
{  
    scanf("%d%d%d", &h, &w, &n);  
    for(int i = 0; i < h; i ++)  
        scanf("%s", m[i]);  
          
    for(int i = 0; i < h; i ++)  
        for(int j = 0; j < w; j ++){  
            if('1' <= m[i][j] && '9' >= m[i][j])  
                gx[m[i][j] - '0'] = i, gy[m[i][j] - '0'] = j;  
            else if('S' == m[i][j])  
                gx[0] = i, gy[0] = j;  
        }  
  
    if(w || h)  
        solve();  
    return 0;  
}  
