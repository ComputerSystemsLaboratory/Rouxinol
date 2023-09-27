#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct E{
    int t;
    int d;
    E(int _t, int _d){
        t = _t;
        d = _d;
    }
};

struct V{
    int cost = -1;
    vector<E> es;
};

typedef vector<V> G;

typedef pair<int, int> P;


int main (int argc, char* argv[]){
    int v, e, r;
    cin >> v >> e >> r;
    G graph(v);
    for (int i = 0; i < e; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].es.push_back(E(t, d));
    }

    priority_queue<P> q;
    q.push(P(r, 0));
    graph[r].cost = 0;

    while (!q.empty()) {
        P next = q.top();
        q.pop();
        int v = next.first;
        int hereCost = next.second;
        for (auto e : graph[v].es) {
            int cost = e.d;
            int newCost = hereCost + cost;
            int oldCost = graph[e.t].cost;
            if (newCost < oldCost || oldCost == -1) {
                graph[e.t].cost = newCost;
                q.push(P(e.t, newCost));
            }
        }
    }

    for (auto v: graph) {
        int d = v.cost;
        if (d == -1) {
            cout << "INF" << endl;
        }else{
            cout << d << endl;
        }
    }

	return 0;
}