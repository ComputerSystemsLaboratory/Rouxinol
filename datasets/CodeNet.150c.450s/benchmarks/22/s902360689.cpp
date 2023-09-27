#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
template <typename T>
struct Edge {
    int from, to;
    T cost;
    Edge(int s, T d) : to(s), cost(d) {}
    Edge(int f, int s, T d) : from(f), to(s), cost(d) {}

    bool operator<(const Edge &e) const {
        return cost < e.cost;
    }
    bool operator>(const Edge &e) const {
        return cost > e.cost;
    }
};
#define Graph(type) vector< vector< Edge<type> > >

int main() {
    int V, E, start;
    cin >> V >> E >> start;

    Graph(int) G(V);
    for(int i=0; i<E; i++) {
        int s, t, d; cin >> s >> t >> d;
        G[s].push_back(Edge<int>(t, d));
    }

    map<int, int> m;
    vector<bool> inq(V, false);
    queue<int> que;
    vector<int> rec(V, 1 << 30);
    que.push(start);
    inq[start] = true;
    rec[start] = 0;

    while(!que.empty()) {
        int point = que.front(); que.pop();
        inq[point] = false;
        for(size_t i=0; i<G[point].size(); i++) {
            Edge<int> next = G[point][i];
            int to = next.to, cost = next.cost;
            if(rec[to] > rec[point] + cost) {
                rec[to] = rec[point] + cost;
                if(!inq[to]) {
                    if(++m[to] >= V) {
                        cout << "NEGATIVE CYCLE" << endl;
                        return 0;
                    }
                    inq[to] = true;
                    que.push(to);
                }
            }
        }
    }
    for(int i=0; i<V; i++) {
        if(rec[i] != 1<<30) cout << rec[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}