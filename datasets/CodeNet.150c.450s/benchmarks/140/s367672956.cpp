#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i=0;i<(n);++i)
const ll MOD=1e9+7;

template<typename T>
struct Prim{
    using P=pair<T,int>;
    int n;
    vector<vector<pair<int,T>>> G;
    vector<bool> used;
    Prim(int n):n(n),G(n),used(n,false){}
    void add_edge(int u,int v,T c){
        G[u].emplace_back(v,c);
        G[v].emplace_back(u,c);
    }
    T build(){
        T res=0;
        priority_queue<P,vector<P>,greater<P>> pq;
        pq.emplace(0,0);
        while(!pq.empty()){
            P p=pq.top(); pq.pop();
            if (used[p.second]) continue;
            used[p.second]=true;
            res+=p.first;
            for (auto e:G[p.second]){
                pq.emplace(e.second,e.first);
            }
        }
        return res;
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V,E; cin >> V >> E;
    Prim<ll> P(V);
    rep(i,E){
        int s,t; ll w; cin >> s >> t >> w;
        P.add_edge(s,t,w);
    }
    cout << P.build() << endl;
}
