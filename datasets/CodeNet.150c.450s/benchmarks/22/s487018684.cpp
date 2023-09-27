

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename NodeIdx,typename Cost>
bool bellman_ford(vector<tuple<NodeIdx,NodeIdx,Cost>> &graph, vector<Cost> &d,  NodeIdx start_idx){
    using Edge = tuple<NodeIdx,NodeIdx,Cost> ;
    const Cost INF = numeric_limits<Cost>::max();

    d[start_idx] = 0;
    for (int i=0;i<d.size();i++){
        for (const Edge &e : graph){
            if (d[get<0>(e)] != INF && d[get<1>(e)] > d[get<0>(e)] + get<2>(e) ){
                d[get<1>(e)] = d[get<0>(e)] + get<2>(e);
                if (i == d.size()-1) return true;
            }
        }
        
    }
    return false;
    
}


int main(){
    ll V,E,r ;
    cin >> V>> E >> r;
    vector<tuple<ll,ll,ll>> graph;
    for (ll i=0;i<E;i++){
        ll v1,v2,c;
        cin >> v1 >> v2 >> c;
        graph.push_back(make_tuple(v1,v2,c));
    }
    const ll INF = numeric_limits<ll>::max();

    vector<ll> d(V,INF);
    bool ret = bellman_ford<ll,ll>(graph,d,r);
    if (ret){
        printf("NEGATIVE CYCLE\n");
    }else{
        for (const auto &c:d){
            if (c == numeric_limits<ll>::max()) printf("INF\n");
            else printf("%lld\n",c);
        }
    }
    

}
