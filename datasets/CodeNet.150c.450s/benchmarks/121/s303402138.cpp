#include <algorithm>
#include <iostream>
#include <cstring>
#include <complex>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
typedef long long LL;
const int MOD = int(1e9)+7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1.0); //M_PI;
const int maxn = 101;
char g[maxn][maxn];
bool vis[maxn][maxn];
string s;
int cnt;
int n , m;
char ch;
int d[4][2] = { -1 , 0 , 0 , 1 , 1 , 0 , 0 , -1 };
void dfs(int x , int y)
{
    vis[x][y] = false;
    for(int i = 0 ; i < 4 ; i ++)
    {
        int xx = x + d[i][0];
        int yy = y + d[i][1];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && vis[xx][yy] && g[xx][yy] == g[x][y])
            dfs(xx , yy);
    }
}

int main()
{
    #ifdef DoubleQ
    freopen("in.txt","r",stdin);
    #endif
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)
            break;
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> s;
            for(int j = 0 ; j < m ; j ++)
            {
                g[i][j] = s[j];
            }
        }
        cnt = 0;
        memset(vis , true , sizeof(vis));
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < m ; j ++)
            {
                if(vis[i][j])
                {
                    dfs(i , j);
                    cnt ++;
                }
            }
        }
        cout << cnt << endl;
    }
}