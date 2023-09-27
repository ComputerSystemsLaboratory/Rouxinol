#include<bits/stdc++.h>
using namespace std;

// 辺を表す構造体
struct edge{
    int from, to;
    long long cost;
};

constexpr long long INF = 1LL << 61;

bool bellman_ford(int v, int s, vector<long long>& cost, const vector<edge>& g){
    cost.resize(v);
    fill(cost.begin(), cost.end(), INF);
    cost[s] = 0;

    for(int i = 0 ; i < v ; ++i){
        for(auto& e : g){
            if(cost[e.from] < INF && cost[e.to] > cost[e.from] + e.cost){
                if(i == v - 1){
                    return false;
                }
                cost[e.to] = cost[e.from] + e.cost;
            }
        }
    }

    return true;
}

int main(){
    int v, e, r;
    cin >> v >> e >> r;

    vector<edge> g;
    for(int i = 0 ; i < e ; ++i){
        int s, t;
        long long d;
        cin >> s >> t >> d;
        g.push_back({s, t, d});
    }

    vector<long long> cost;
    if(bellman_ford(v, r, cost, g)){
        for(int i = 0 ; i < v ; ++i){
            if(cost[i] < INF){
                cout << cost[i] << endl;
            }else{
                cout << "INF" << endl;
            }
        }
    }else{
        cout << "NEGATIVE CYCLE" << endl;
    }

    return 0;
}
