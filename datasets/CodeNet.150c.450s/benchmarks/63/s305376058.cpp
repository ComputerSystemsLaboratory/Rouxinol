#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF=1e9;
const ll MOD=1e9+7;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};


using Weight = ll;
struct Edge {
    int to;
    Weight cost;
};
struct Node {
    int v;
    Node(int v) : v(v) {}
    bool operator<(const Node &rhs) const { return tie(v) < tie(rhs.v); }
};
struct State : public Node {
    Weight cost;
    State(Node node, int cost) : Node(node), cost(cost) {}
    bool operator<(const State &rhs) const { return cost > rhs.cost; }
};

map<Node, Weight> dijkstra(const vector<vector<Edge>> &adj, const Node &source) {
    map<Node, Weight> dist;
    priority_queue<State> que;

    que.push(State(source, 0));
    dist[source] = 0;

    while (que.size()) {
        State s = que.top();
        que.pop();
        Node cur{s.v};

        for (auto u : adj[s.v]) {
            Node next{u.to};
            if (!dist.count(next) || dist[next] > dist[cur] + u.cost) {
                dist[next] = dist[cur] + u.cost;
                que.push(State(next, dist[next]));
            }
        }
    }

    return dist;
}
int main() {
    int V,E,r;
    cin>>V>>E>>r;
    vector<vector<Edge>> adj;
    adj.resize(V);
    rep(i,E) {
        int s,t,d;
        cin>>s>>t>>d;
        adj[s].push_back(Edge{t,d});
    }
    auto dist = dijkstra(adj, r);
    rep(i,V) {
        Node node{i};
        if(dist.count(node)) cout<<dist[node]<<endl;
        else cout<<"INF"<<endl;
    }
    return 0;
}