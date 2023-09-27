#include<bits/stdc++.h>
using namespace std;

using i64 = int64_t;

constexpr int INF = 1e9;

struct Edge {
    int from, to;
    i64 cost;
};

// s番目の頂点から各頂点への最短距離を求める
bool shortest_path(int v, int e, int s, vector<i64> &mini, const vector<Edge> &edges) {
    for(int i = 0; i < 2*v; i++) {
        bool update = false;
        for (auto e: edges) {
            if (mini[e.from] != INF && mini[e.to] > mini[e.from] + e.cost) {
                mini[e.to] = mini[e.from] + e.cost;
                update = true;
            }
        }
        if (!update)
            break;
        else if(i >= 2*v - 1)
            return false;
    }
    return true;
}

int main(){
    int v, e, r;
    cin >> v >> e >> r;
    vector<Edge> edges;
    for(int i=0;i<e;++i){
        int s, t, d;
        cin >> s >> t >> d;
        edges.push_back({s, t, d});
    }
    vector<i64> mini(v, INF);
    mini[r] = 0;
    bool flag = shortest_path(v, e, r, mini, edges);

    if(!flag){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    for(int i=0;i<v;++i){
        if(mini[i] < INF){
            cout << mini[i] << endl;
        }else{
            cout << "INF" << endl;
        }
    }

    return 0;
}

