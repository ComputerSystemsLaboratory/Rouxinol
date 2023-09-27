#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 1000 + 8;
#define inf 0x3f3f3f3f

struct node
{
    int x,y;
    node(int x = 0,int y = 0):x(x),y(y){}
}s,current,st,nd;

int h,w,n;
int step[maxn][maxn];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
string Map[maxn];
int sum = 0;

int bfs()
{
    for(int i = 0 ; i < h ; ++i){
        for(int j = 0 ; j < w; ++j){
            step[i][j] = inf;
        }
    }
    queue<node> q;
    step[st.x][st.y] = 0;
    q.push(st);
    while(!q.empty())
    {
        current = q.front();
        q.pop();
        if(current.x == nd.x && current.y == nd.y) break;
        for(int i = 0; i < 4; ++i)
        {
            s.x = current.x + dx[i];
            s.y = current.y + dy[i];
            if(s.x >= 0 && s.x < h && s.y >= 0 && s.y < w && Map[s.x][s.y] != 'X' && step[s.x][s.y] == inf)
            {
                step[s.x][s.y] = step[current.x][current.y] + 1;
                q.push(s);
            }
        }
    }
    return step[nd.x][nd.y];
}
int main()
{
    while(cin >> h >> w >> n)
    {
        sum = 0;
        for(int i = 0 ; i < h; ++i) cin >> Map[i];
        for(int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (Map[i][j] == 'S') {
                    st.x = i;
                    st.y = j;
                }
            }
        }

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < h; ++j)
            {
                for(int k = 0; k < w; ++k)
                {
                    if(Map[j][k] == '1' + i)
                    {
                        nd.x = j; nd.y = k;
                        sum += bfs();
                        st.x = j; st.y = k;
                    }
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

/*
3 3 1
S..
...
..1
4 5 2
.X..1
....X
.XX.S
.2.X.
10 10 9
.X...X.S.X
6..5X..X1X
...XXXX..X
X..9X...X.
8.X2X..X3X
...XX.X4..
XX....7X..
X..X..XX..
X...X.XX..
..X.......
*/