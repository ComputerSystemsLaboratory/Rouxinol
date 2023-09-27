/*
* Welcome to my code!
*---------------------------------------------*
* author : lynmisakura(twitter : @andoreiji11)
*/

#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0;i < n;i++)
using ll = int64_t;

template<class T> void print(vector<T>& a){
    int sz = a.size();
    for(int i=0;i<sz;i++)cout<<a[i] << (i<sz-1?' ':'\n');
}

template<class T> bool chmin(T& a,T b){
    if(a > b){ a = b; return true; } return false;
}
template<class T> bool chmax(T& a,T b){
    if(a < b){ a = b; return true; } return false;
}


template<class T> struct BellmanFord{

    struct Edge{
        int from,to;
        T cost;
        Edge(int from,int to,T cost):from(from),to(to),cost(cost){}
    };

    const T INF = 1LL << 55;

    int V,E;
    vector<Edge> es;
    vector<T> dist;

    BellmanFord(int V):V(V),dist(V,INF){}
    void add_edge(int from,int to,T cost){
       es.emplace_back(from,to,cost);
    }
    bool solve(int s){ // exist roop ?
        E = es.size();
        dist.assign(V,INF);
        dist[s] = 0;
        for(int roop = 0;roop <= V;roop++){
            if(roop == V) return true;
            bool update = false;
            for(int i = 0;i < E;i++){
                Edge e = es[i];
                if(dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost){
                    dist[e.to] = dist[e.from] + e.cost;
                    update = true;
                }
            }
            if(!update) break;
        }
        return false;
    }
};

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int64_t n,m,r;cin >> n >> m >> r;
    BellmanFord<ll> BF(n);

    rep(i,m){
        int64_t s,t,d;cin >> s >> t >>d;
        BF.add_edge(s,t,d);
    }

    if(BF.solve(r)){
        cout << "NEGATIVE CYCLE" << '\n';
    }else{
        rep(i,n)cout << (BF.dist[i] == BF.INF ? "INF" : to_string(BF.dist[i])) << '\n';
    }
}
