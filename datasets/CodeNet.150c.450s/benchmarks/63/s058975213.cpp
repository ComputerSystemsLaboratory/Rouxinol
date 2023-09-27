#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<sstream>

using namespace std;

class Graph{
private:
    struct Node {
        int index;
        bool done;
        long long dist;
        vector<pair<int, int>> adj;
        Node() : done(false), dist(INF) {}

        bool operator>(const Node& another) const {
            return dist > another.dist;
        }
    };

    vector<Node> nodes;

    void range_check(int i) {
        if (i < 0 || i > n) {
            cout << "dijkstra: Invalid node index: " << i << endl;
            throw "Exception";
        }
    }
public:
    const static long long INF = 1LL << 62;
    const int n;

    Graph(int _n) : n(_n) {
        nodes = vector<Node>(_n);
        for (int i = 0; i < _n; ++i) {
            nodes[i].index = i;
        } 
    }

    // add directed edge from u-th node to v-th node
    void addEdge(int u, int v, int w) {
        range_check(u);
        range_check(v);
        nodes[u].adj.push_back(make_pair(v, w));
        if (w < 0) {
            cout << "dijkstra: All weights must be positive: " << w << " (" << u << " -- " << v << ")" << endl;
            throw "Exception";
        }
    }

    // add undirected edge between u-th node and v-th node
    void addUndirectedEdge(int u, int v, int w) {
        addEdge(u, v, w);
        addEdge(v, u, w);
    }

    // calculate shortest distance from s-th node
    void dikstra(int s) {
        range_check(s);

        priority_queue<Node, vector<Node>, greater<Node>> pq;

        nodes[s].dist = 0;
        pq.push(nodes[s]);

        while (!pq.empty()) {
            Node top = pq.top();
            pq.pop();
            top.done = true;

            int u = top.index;
            for (pair<int, int> p : top.adj) {
                int v = p.first;
                int w = p.second;
                if (nodes[v].done) continue;

                long long newdist = nodes[u].dist + (long long)w;
                if (nodes[v].dist > newdist) {
                    nodes[v].dist = newdist;
                    pq.push(nodes[v]);
                }
            }
        }
    }

    long long shortestDistTo(int i) const {
        return nodes[i].dist;
    }

    string dump() const {
        ostringstream os;
        for (Node node : nodes) {
            os << node.index << ": ";
            for (pair<int, int> p : node.adj) {
                os << p.first << "(" << p.second << ") ";
            }
            os << endl;
        }
        return os.str();
    }
};


int n, m, r;

int main () {
    cin >> n >> m >> r;
    Graph graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph.addEdge(u, v, w);
    }
    graph.dikstra(r);
    for (int i = 0; i < n; ++i) {
        long long d = graph.shortestDistTo(i);
        if (d == Graph::INF) {
            cout << "INF" << endl;
        } else {
            cout << d << endl;
        }
    }
}

