#include<bits/stdc++.h>

using namespace std;
struct node
{
    int x, y, f;
};
char a[1010][1010];
int book[1010][1010];
int m, n, h, ans, head, tail;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
void bfs(int x, int y, int step)
{
    int k = 0;
    node s, e;
    s.x = x;
    s.y = y;
    s.f = 0;
    memset(book, 0, sizeof(book));
    book[x][y] = 1;
    queue<node>q;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        q.pop();
        for(int i = 0 ;i < 4; i++)
        {
            e.x = s.x + dir[i][0];
            e.y = s.y + dir[i][1];
            e.f = s.f + 1;
            if(a[e.x][e.y] == 'X' || e.x < 0 || e.y < 0 || e.x >= m || e.y >= n || book[e.x][e.y])
                continue;
            if(a[e.x][e.y] == step + '0')
            {
                ans += e.f;
                k = 1;
                break;
            }
            book[e.x][e.y] = 1;
            q.push(e);
        }
        if(k)
            break;
    }
    if(k && step == h)
        return;
    bfs(e.x, e.y, step+1);
}
int main ()
{
    while(~scanf("%d %d %d", &m, &n, &h))
    {
        int i, j;
        ans = 0;
        for(i = 0; i < m; i++)
            scanf("%s", a[i]);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                if(a[i][j] == 'S')
                   {
                        bfs(i, j, 1);
                        break;
                   }
        printf("%d\n", ans);
    }
    return 0;
}