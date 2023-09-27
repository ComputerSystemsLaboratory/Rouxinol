#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> P;
typedef pair<ll,ll> l_l;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef pair<l_l,ll> lll;
typedef vector<string> vs;
const ll dx[4]={1,-1,0,0};
const ll dy[4]={0,0,1,-1};
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
const int INF=1001001000;
const int mINF=-1001001000;
const ll LINF=1010010010010010000;
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
//グリッド：（典型）dp,dfs,bfs,最短経路,その他
ll v,e,s;
ll d[110000];
vector<l_l> g[110000];
void dijkstra(ll s){
    rep(i,110000)d[i]=LINF;
    d[s]=0;
    priority_queue<l_l,vector<l_l>,greater<l_l>> pq;
    pq.push({0,s});
    while(pq.size()){
        ll nowd=pq.top().fi;
        ll nowp=pq.top().se;
        pq.pop();
        if(nowd>d[nowp])continue;
        for(auto next:g[nowp]){
            ll nextp=next.fi;
            ll nextd=next.se;
            if(chmin(d[nextp],d[nowp]+nextd)){
                pq.push({d[nextp],nextp});
            }
        }
    }
    return;
}
int main(){
    cin>>v>>e>>s;
    rep(i,e){
        ll u,v,x;cin>>u>>v>>x;
        g[u].pb({v,x});
    }
    dijkstra(s);
    rep(i,v){
        if(d[i]!=LINF)cout<<d[i]<<endl;
        else cout<<"INF"<<endl;
    }
    return 0;
}
