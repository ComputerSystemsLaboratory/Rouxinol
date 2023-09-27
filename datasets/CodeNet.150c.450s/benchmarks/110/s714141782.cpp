
#include <algorithm>
#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

#define int_ int64_t
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define lb long double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

const ll N=1010;
ll n,m,x;
char grid[N][N];
bool vis[N][N];
ll u[10],v[10];
ll dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};

struct node {
    ll x,y,val;
};

ll solve(ll s,ll t) {
    memset(vis,0,sizeof(vis));
    queue<node> q;
    q.push({u[s],v[s],0});
    while (!q.empty()) {
        node cur=q.front();
        q.pop();
        if (vis[cur.x][cur.y]) continue;
        vis[cur.x][cur.y]=true;
        if (cur.x==u[t]&&cur.y==v[t]) {
            return cur.val;
        }
        for (ll i=0;i<4;i++) {
            ll xx=cur.x+dir[i][0];
            ll yy=cur.y+dir[i][1];
            if (xx>0&&xx<=n&&yy>0&&yy<=m&&!vis[xx][yy]&&grid[xx][yy]!='X') {
                q.push({xx,yy,cur.val+1});
            }
        }
    }
    return 0;
}

int main()
{
    scanf("%lld%lld%lld",&n,&m,&x);
    for (ll i=1;i<=n;i++) {
        scanf("%s",&grid[i][1]);
        for (ll j=1;j<=m;j++) {
            if (grid[i][j]=='S') {
                u[0]=i,v[0]=j;
            } else if (grid[i][j]!='.'&&grid[i][j]!='X') {
                ll idx=grid[i][j]-'0';
                u[idx]=i,v[idx]=j;
            }
        }
    }
    ll ans=0;
    for (ll i=1;i<=x;i++) {
        ans+=solve(i-1,i);
    }
    printf("%lld\n",ans);
}
