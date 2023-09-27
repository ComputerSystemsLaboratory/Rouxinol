#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

using namespace std;
const int maxn = 1005;
const int inf = 1e6;

typedef pair<int, int> P;
char data[maxn][maxn];
int dist[maxn][maxn];
int sx, sy, w, h, n, sum;
P fac[15];

void initialize()
{
    for(int i=0; i<h; ++i)
    {
        for(int j=0; j<w; ++j)
        {
            dist[i][j] = inf;
        }
    }
}

void bfs(P s, P g)
{
    int a[4] = {-1, 0, 1, 0}, b[4] = {0, -1, 0, 1};
    queue<P> que;
    que.push(s);

    while(!que.empty())
    {
        P cur = que.front();
        que.pop();

        if(cur==g)  return;

        int x = cur.first, y = cur.second;
        for(int i=0; i<4; ++i)
        {
            int nx = x + a[i], ny = y + b[i];
            if(nx>=0 && nx<h && ny>=0 && ny<w && data[nx][ny]!='X' && dist[nx][ny]==inf)
            {
                que.push(P(nx, ny));
                dist[nx][ny] = min(dist[nx][ny], dist[x][y]+1);
            }
        }
    }
}

int main()
{
    //while(scanf("%d%d", &w, &h)!= EOF && w && h){
    scanf("%d%d%d", &h, &w, &n);
    for(int i=0; i<h; ++i)
        scanf("%s", &data[i]);

    for(int i=0; i<h; ++i)
    {
        for(int j=0; j<w; ++j)
        {
            if(data[i][j]=='S')
            {
                fac[0] = P(i,j);
            }
            else if(data[i][j]>='1' && data[i][j]<='9')
                fac[data[i][j]-'0'] = P(i,j);
        }
    }
    sum = 0;
    for(int i=1; i<=n; ++i)
    {
        int x = fac[i-1].first, y = fac[i-1].second;
        initialize();
        dist[x][y] = 0;
        bfs(fac[i-1], fac[i]);
        //data[x][y] = '.';
        sum += dist[fac[i].first][fac[i].second];
        //cout << sum << endl;
    }
    printf("%d\n", sum);

    //}
    return 0;
}

