//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#define UP(i,x,y) for(i=x;i<=y;i++)
#define DOWN(i,x,y) for(i=x;i>=y;i--)
#define MEM(a,x) memset(a,x,sizeof(a))
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define lson rt<<1, l, mid
#define rson rt<<1|1, mid + 1, r
#define lowbit(x) (x&-x)
using namespace std;
int cost[50][50];
int d[50];
bool vis[50];
int V;
int dijks(int s)
{
    fill(d,d+V+1,INF);
    fill(vis,vis+V+1,false);
    d[s] = 0;
    while(true) {
        int v = -1;
        for(int u = 0; u <= V; u++)
            if(!vis[u]&&(v==-1||d[u]<d[v]))
                v=u;
        if(v==-1)
            break;
        vis[v] = true;
        for(int u = 0; u <= V; u++)
            d[u] = min(d[u], d[v] + cost[v][u]);
    }
    int sum = 0;
    for(int j = 0; j <= V; j++)
        sum+=d[j];
    return sum;
}

int main()
{
    int n;
    while(cin>>n&&n) {
        memset(cost, INF, sizeof cost);
        int x, y, len;
        V = 0;
        for(int i = 0; i < n; i++){
            scanf("%d%d%d", &x, &y, &len);
            cost[x][y] = cost[y][x] = len;
            V = max(max(x,y),V);
        }
        int minn=INF, idx;
        for(int i = 0; i <= V ;i++){
            int sum = dijks(i);
            if(sum<minn){
                minn = sum;
                idx = i;
            }
        }
        printf("%d %d\n",idx, minn);
    }
    return 0;
}

