#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<map>
#include<functional>
using namespace std;

const int mod = 1e9+7;
typedef long long ll;
typedef unsigned long long ull;

struct Edge{
    int dst;
    int weight;
    Edge(int dst, int weight): dst(dst), weight(weight) {}
};

struct TmpDist{
    int vertex;
    int dist;
    TmpDist(int vertex, int dist): vertex(vertex), dist(dist) {}
    bool operator< (const TmpDist& right)const{
        return dist > right.dist;
    }
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
const int INFINT = INT_MAX/2;

vector<int> dijkstra(Graph &G, int r){
    int V = G.size();
    vector<int> dist(V, INFINT);
    priority_queue<TmpDist> pq;
    vector<bool> check(V, false);
    TmpDist init(r, 0);
    pq.push(init);
    while(!pq.empty()){
        TmpDist td = pq.top();pq.pop();
        int now = td.vertex;
        if(!check[now]){
            check[now] = true;
            dist[now] = td.dist;
            for (int i=0;i<G[now].size();i++){
                if(dist[G[now][i].dst] > td.dist + G[now][i].weight){
                    TmpDist tdCandidate(G[now][i].dst, td.dist + G[now][i].weight);
                    pq.push(tdCandidate);
                }
            }
        }
    }
    return dist;
}

int main(){
    int V, E, r;
    cin >> V >> E >> r;
    Graph G(V);
    int s, t, w;
    for(int i=0;i<E;i++){
        cin >> s >> t >> w;
        Edge e(t, w);
        G[s].push_back(e);
    }

    vector<int> dist = dijkstra(G, r);
    for (int i=0;i<V;i++){
        if(dist[i] == INFINT) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}
