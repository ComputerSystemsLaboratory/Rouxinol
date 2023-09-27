#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl; 
#define INF 1000000000
#define mod 1000000007
using ll=long long;
const ll LINF = 1001002003004005006ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

/*
*の制約が6個までということは全パターンやれということ？
双対問題を考える
制約通り辺を張ってベルマンフォードして負辺でinf
到達不可能で-1でいいのかな
*/
template<typename T>
struct edge{
    int src,to;//src source
    T cost;
    edge(int to,T cost):src(-1),to(to),cost(cost){}
    edge(int src,int to,T cost):src(src),to(to),cost(cost){}
};

//空を返したら負のループ
template<typename T>
vector<T> BellmanFord(vector<edge<T>> &edges,int V,int s){
    const auto TINF=numeric_limits<T>::max();
    vector<T> dist(V,TINF);
    dist[s]=0;
    for(int i=0;i<V-1;i++){
        for(auto &e:edges){
            if(dist[e.src]==TINF) continue;
            dist[e.to]=min(dist[e.to],dist[e.src]+e.cost);
        }
    }
    for(auto &e:edges){
        if(dist[e.src]==TINF) continue;
        if(dist[e.src]+e.cost<dist[e.to]) return vector<T>();
    }
    return dist;
}


signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    vector<edge<ll>> g;
    int V,E,r;
    cin>>V>>E>>r;
    rep(i,E){
        int u,v;ll w;cin>>u>>v>>w;
        g.push_back(edge<ll>(u,v,w));
    }
    auto ans=BellmanFord(g,V,r);
    if(ans.empty()) cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(auto x:ans){
            if(x>=LINF) cout<<"INF"<<endl;
            else cout<<x<<endl;
        }
    }
    return 0;
}

