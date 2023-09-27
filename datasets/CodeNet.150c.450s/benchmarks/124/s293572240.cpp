#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge{
    long long from,to,cost;
    edge(){}
    edge(long long f,long long t,long long c) : from(f),to(t),cost(c){}
};

vector<long long> bellmanford(int s,const vector<edge>& es,int V){
    constexpr long long inf = 1ll << 60;
    vector<long long> d(V,inf);
    d[s] = 0;
    for(int i=0;i<V;i++){
        for(const edge& e : es){
            if(d[e.from]!=inf && d[e.to]>d[e.from]+e.cost){
                d[e.to] = d[e.from] + e.cost;
            }
        }
    }
    return d;
}

signed main(){
    int n;cin>>n;
    vector<edge> es;
    for(int i=0;i<n;i++){
        int u,k;
        cin >> u >> k;
        for(int j=0;j<k;j++){
            int c,v;
            cin >> v >> c;
            es.emplace_back(edge(u,v,c));
        }
    }
    auto d = bellmanford(0,es,n);
    for(int i=0;i<n;i++){
        cout << i <<  " " << d[i] << endl;
    }
}