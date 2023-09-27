#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct edge{int to,cost;};
vector<edge> G[100010];
vector<int> node;
const int INF = 1e9;
int V,E,r;

bool Bellman_Ford(int r){
    node = vector<int>(V,INF);
    node[r] = 0;
    for(int i=0;i<V;++i){
        for(int v=0;v<V;++v){
            for(auto e: G[v]){
                if(node[v] == INF) continue;
                if(node[e.to] > node[v] + e.cost){
                    node[e.to] = node[v] + e.cost;
                    if(i == V-1) return true;
                }
            }
        }
    }
    return false;
}

int main(){
    cin >> V >> E >> r;
    for(int i = 0;i<E;++i){
        int s,t,c;
        cin >> s >> t >> c;
        G[s].push_back({t,c});
    }

    bool negloop = Bellman_Ford(r);

    if(negloop){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for(auto e : node){
        if(e == INF) cout << "INF" << endl;
        else cout << e << endl;
    }
}
