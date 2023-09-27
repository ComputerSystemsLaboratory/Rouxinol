#include <bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
typedef long long ll;
typedef pair<int64_t,int64_t> pll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
#define INF (2147483647)
#define mod (1000000007)
#define limit (7368791)
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define ALL(a) begin(a),end(a)
#define sz(s) (s).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define MAXV 1010
#define MAXE 2010
int V,E,r;
struct edge{int from,to,cost;};
vector<edge>G(MAXE);
vector<ll> l(MAXV,INF);//from ss to v

bool bellman(){
    l[r]=0;
    REP(i,V)REP(i,E){
        if(l[G[i].from]==INF)continue;
        if(l[G[i].to]>l[G[i].from]+G[i].cost)
            l[G[i].to]=l[G[i].from]+G[i].cost;

    }
    REP(i,E)if(l[G[i].to]>l[G[i].from]+G[i].cost&&l[G[i].from]!=INF)return false;
    return true;
}

void solve()
{
    cin>>V>>E>>r;
    REP(i,E){
        int x,y,d;cin>>x>>y>>d;
        G[i]={x,y,d};
    }
    if(!bellman()){cout<<"NEGATIVE CYCLE"<<endl;return;}
    REP(i,V){if(l[i]>=INF)cout<<"INF"<<endl;else cout<<l[i]<<endl;}
}

int main()
{
    cin.tie(0);
	ios::sync_with_stdio(false);
    solve();
    return 0;
}

