#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<bitset>
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; i++ )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
int dx[4]={1,0,-1,0} , dy[4]={0,1,0,-1} ;
typedef vector<vector<pli>> wgraph;

vector<ll> bfs(wgraph v,int x){
    priority_queue<pli,vector<pli>,greater<pli>> q;
    vector<ll> dist(v.size(),longinf);
    dist[x]=0;
    q.push({0LL,x});
    while(q.size()){
        pli p=q.top();q.pop();
        ll d=p.first,now=p.second;
        if(dist[now]<d)continue;
        for(auto to:v[now]){
            if(dist[to.second]>d+to.first){
                dist[to.second]=d+to.first;
                q.push({dist[to.second],to.second});
            }
        }
    }
    return dist;
}
int main(){
    int n,m,s;
    cin>>n>>m>>s;
    wgraph v(n);
    rep(i,m){
        ll x,y,z;
        cin>>x>>y>>z;;
        v[x].push_back({z,y});
    }
    vector<ll> ans=bfs(v,s);
    rep(i,n){
        if(ans[i]==longinf)cout<<"INF"<<endl;
        else cout<<ans[i]<<endl;
    }
   return 0;
}
