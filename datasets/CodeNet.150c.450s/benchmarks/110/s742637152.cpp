#include <bits/stdc++.h>
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rb_tree>
*/
#define mem(x,y) memset(x,y,sizeof(x))
//#define P(x) cout<<#x<<" = "<<x<<endl;
#define PN(x,n) cout<<'{'<<x[0];for(int i=1;i<n;i++)cout<<','<<x[i];cout<<'}'<<endl;
#define RP(i,n) for(int i=0;i<n;i++)
#define RP2(i,a,b) for(int i=a;i<=b;i++)
#define mp make_pair
#define P pair<int,int>
#define pb push_back
#define fi first
#define se second
#define inf 0x3f3f3f3f
#define dinf 1e99
#define OJ
#define ite iterator
const int dx[]={1,0,-1,0};
const int dy[]={0,1,0,-1};
using namespace std;/*
using namespace __gnu_cxx;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef tree<int, int, less<int>, rb_tree_tag, tree_order_statistics_node_update> Tree;
const double PI = acos(-1.0);  
const double eps = 1e-5;
const double T = 5; //t of fire
const double delta = 0.99; //decreasing speed of t
const int INF = 1000000000;*/
const int maxn=1005;
bool vis[maxn][maxn];
int d[maxn][maxn];
int ans,n,m,k,sx,sy;
int lx[maxn],ly[maxn],G[maxn][maxn];
char bf;
queue<P> q;
int bfs(int sx,int sy,int ex,int ey){
    mem(vis,0);
    q.push(mp(sx,sy));
    vis[sx][sy] = 1;
    d[sx][sy] = 0;
    while(!q.empty()){
	P u = q.front(); q.pop();
	for(int dr=0;dr<4;dr++){
	    P v=mp(u.fi+dx[dr],u.se+dy[dr]);
	    if(v.fi<1 || v.se<1 || v.fi>n || v.se>m || vis[v.fi][v.se] || G[v.fi][v.se]) continue;
	    d[v.fi][v.se]=d[u.fi][u.se] + 1;
	    vis[v.fi][v.se] = 1;
	    q.push(v);
	}
    }
    return d[ex][ey];
}
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
	    cin>>bf;
	    if(bf=='.') G[i][j] = 0;
	    else if(bf == 'S') sx = i, sy = j, G[i][j] = 0;
	    else if(bf=='X') G[i][j] = 1;
	    else lx[bf-48] = i, ly[bf-48]=j;
	}
    }
    for(int i=1;i<=k;i++){
	ans += bfs(sx,sy,lx[i],ly[i]);
	sx=lx[i], sy=ly[i];
    }
    cout<<ans<<endl;
    return 0;
}