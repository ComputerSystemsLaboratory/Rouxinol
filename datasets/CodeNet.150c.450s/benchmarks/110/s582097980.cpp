
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;
const int maxn = 1e3 + 5;
const int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int mp[maxn][maxn];
//bool vis[maxn][maxn];
int d[maxn][maxn];
struct point{
    int x,y;
};
int h,w,n;
 int dis = 0;
void bfs(point &p,int cnt)
{
   // memset(vis, 0, sizeof(vis));
    memset(d, 0, sizeof(d));
    queue<point> q;
    q.push(p);
    while (!q.empty()) {
        point t = q.front();q.pop();
        //vis[t.x][t.y] = true;
        if(mp[t.x][t.y] == cnt + 1) {dis += d[t.x][t.y];p.x = t.x,p.y = t.y;return ;}
        for (int i = 0; i < 4; i ++) {
            int tx = t.x + dir[i][0];
            int ty = t.y + dir[i][1];
            if (tx >= 0 && tx < h && ty >= 0 && ty < w && !d[tx][ty] && mp[tx][ty] != -1) {
                q.push({tx,ty});
                d[tx][ty] = 1 + d[t.x][t.y];
            }
        }
    }
}
int main()
{
    while (scanf("%d%d%d",&h,&w,&n) != EOF) {
        getchar();
        char ch;
        memset(mp, -1, sizeof(mp));
       // int sx,sy;
        point s;
        for (int i = 0; i < h; i ++) {
            for (int j = 0; j < w; j ++) {
                scanf("%c",&ch);
                if(ch == 'S') {s.x = i,s.y = j;mp[i][j] = 0;}
                else if(ch == '.') {mp[i][j] = 0;}
                else if(isdigit(ch)) {mp[i][j] = ch - '0';}
            }
            getchar();
        }
       
        dis = 0;
        for (int i = 0; i < n; i ++) {
            bfs(s,i);
        }
        printf("%d\n",dis);
    }
    return 0;
}