#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdio>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <cstdlib>
#include <stack>
#include <time.h>
using namespace std;
typedef long long LL;
const int MOD = int(1e9)+7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1.0); //M_PI;
const int maxn = 1001;
char g[maxn][maxn];
int vis[maxn][maxn];
int row , col , n;
int d[4][2] = {0 , 1 , 1 , 0 , 0 , -1 , -1 , 0};

struct factory{
    int x , y , index;
}fac[11];

bool cmp(struct factory tp1 , struct factory tp2)
{
    return tp1.index <= tp2.index;
}
struct node{
    int x , y;
    int sum;
};

int bfs(int si , int sj , int ei , int ej)
{
    queue<struct node> q;
    while(!q.empty()) q.pop();
    memset(vis , 0 , sizeof(vis));
    struct node tp1 , tp2 , tp3;
    tp1.x = si;
    tp1.y = sj;
    tp1.sum = 0;
    q.push(tp1);
    vis[si][sj] = 1;
    //cout << si << " " << sj << endl;
    while(!q.empty())
    {
        tp2 = q.front();
        q.pop();
        int curx = tp2.x;
        int cury = tp2.y;
        if(curx == ei && cury == ej){
            return tp2.sum;
        }
        for(int i = 0 ; i < 4 ; i ++){
            int xx = curx + d[i][0];
            int yy = cury + d[i][1];
//cout << xx << " " << yy << endl;
            if(xx < 0 || xx >= row || yy < 0 || yy >= col || g[xx][yy] == 'X' || vis[xx][yy]) continue;
            tp3.x = xx;
            tp3.y = yy;
            tp3.sum = tp2.sum + 1;
            vis[xx][yy] = 1;
            q.push(tp3);
        }
        //cout << endl;
    }
    return -1;
}

int main()
{

    #ifdef DoubleQ
    freopen("in.txt" , "r" , stdin);
    #endif
    while(cin >> row >> col >> n){
        string s;
        int len = 0;
        for(int i = 0 ; i < row ; i ++){
            cin >> s;
            for(int j = 0 ; j < col ; j ++){
                g[i][j] = s[j];
                if(s[j] == 'S'){
                    fac[len].x = i;
                    fac[len].y = j;
                    fac[len++].index = 0;
                }
                else if(s[j] >= '0' && s[j] <= '9'){
                    fac[len].x = i;
                    fac[len].y = j;
                    fac[len++].index = (int)(s[j] - '0');
                }
            }
        }
        sort(fac , fac + len , cmp);
        int res = 0;
        for(int i = 1 ; i < len ; i ++){
            g[fac[i-1].x][fac[i-1].y] = '.';
            char tp = g[fac[i].x][fac[i].y];
            g[fac[i].x][fac[i].y] = '.';

            int mid = bfs(fac[i-1].x , fac[i-1].y , fac[i].x , fac[i].y);
            res += mid;
            g[fac[i].x][fac[i].y] = tp;
        }
        cout << res  << endl;
    }
}