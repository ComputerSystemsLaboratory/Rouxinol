#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(i,x) for(auto i=(x).begin(); i!=(x).end();i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

using namespace std;

struct edge{
    int to,cost;
};
int v,e,r;

vector<edge> G[100010];
vector<int> d(100010,INF);

void dijkstra(){
    priority_queue<P> q;
    q.push(MP(0,r));
    while(!q.empty()){
        P p=q.top();
        q.pop();
        int now=p.se;
        int cost=-p.fi;
        if(cost>d[now]) continue;
        rep(i,0,G[now].size()){
            edge e=G[now][i];
            int to=e.to;
            int new_cost=cost+e.cost;
            if(new_cost<d[to]){
                d[to]=new_cost;
                q.push(MP(-d[to],to));
            }
        }
    }
}
int main(){
    cin>>v>>e>>r;
    d[r]=0;
    rep(i,0,e){
        int a,b,c;
        cin>>a>>b>>c;
        G[a].pb(edge{b,c});
        //cout<<G[a][0].to<<" "<<G[a][0].cost<<endl;
    }
    dijkstra();
    rep(i,0,v){
        if(d[i]==INF)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    
    
    return 0;
}

