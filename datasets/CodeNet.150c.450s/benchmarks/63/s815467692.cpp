#include <iostream>
#include <queue>
#define MAX_VERTICE_NUM 100001
#define INF 2147483647
using namespace std;

typedef pair<int, int> pii;

int V, E, r, si, ti, di;
int d[MAX_VERTICE_NUM];
int S[MAX_VERTICE_NUM];
vector< vector<pii> > graph;
priority_queue< pii, vector<pii>, greater<pii> > q;

void init() {
    cin >> V >> E >> r;
    graph.resize(V + 1);

    for (int i = 0; i < V; ++i) {
        S[i] = 0;
        d[i] = i == r ? 0 : INF;
    }
    for (int i = 0; i < E; ++i) {
        cin >> si >> ti >> di;
        graph[si].push_back(make_pair(di, ti));
    }
    q.push(make_pair(d[r], r));
}

void dijkstra() {
    while (!q.empty()) {
        pii tmp = q.top(); q.pop();
        int x = tmp.second;
        if (S[x]) {continue;}
        S[x] = 1;
        for (int i = 0; i < graph[x].size(); ++i) {
            if (d[x] + graph[x][i].first < d[graph[x][i].second]) {
                d[graph[x][i].second] = d[x] + graph[x][i].first;
                q.push(make_pair(d[graph[x][i].second], graph[x][i].second));
            }
        }
    }
}

void opAns() {
    for (int i = 0; i < V; ++i) {
        if (d[i] < INF) {
            cout << d[i] << endl;
        } else {
            cout << "INF" << endl;
        }
    }
}

int main() {
   // freopen("in14.txt", "r", stdin);

    init();
    dijkstra();
    opAns();
}