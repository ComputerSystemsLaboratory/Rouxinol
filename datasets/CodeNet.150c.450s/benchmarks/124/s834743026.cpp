#include<iostream>
#include<vector>
#include<queue>
#define INF 2e9
using namespace std;

void Dikstra(const vector<vector<pair<int, int> > >& G, vector<int>& d){
    d[0] = 0;
    priority_queue<pair<int, int> , vector<pair<int, int> >, greater<pair<int, int> > > PQ;
    PQ.push(make_pair(0, 0));
    vector<bool> is_black(d.size(), false);
    is_black[0] = true;
    while (!PQ.empty()) {
        int t = PQ.top().second;
        PQ.pop();
        is_black[t] = true;
        for (int i = 0; i < G[t].size(); i++) {
            int v = G[t][i].first;
            int w = G[t][i].second;
            if (!is_black[v] && d[t] + w < d[v]) {
                d[v] = d[t] + w;
                PQ.push(make_pair(d[v], v));
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > G(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            G[u].push_back(make_pair(v, c));
        }
    }
    vector<int> d(n, INF);
    Dikstra(G, d);
    for (int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}