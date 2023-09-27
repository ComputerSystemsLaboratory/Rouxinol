#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Edge {
    long long from;
    long long to;
    long long cost;
};
typedef vector<Edge> Graph;
const long long INF = 1e17;
void Bellman_Ford(Graph& G, vector<long long>& D, long long V, long long s, long long E) {
    D.resize(V, INF);
    D.at(s) = 0;
    bool check = true;
    long long i = 0;
    while (true) {
        check = false;
        if (i == V - 1) {
            cout << "NEGATIVE CYCLE" << endl;
            return;
        }
        for (long long j = 0; j < E; j++) {
            if (D.at(G.at(j).from) != INF && D.at(G.at(j).to) > D.at(G.at(j).from) + G.at(j).cost) {
                check = true;
                D.at(G.at(j).to) = D.at(G.at(j).from) + G.at(j).cost;
            }
        }
        i++;
        if (!check) break;
    }
    for (long long i = 0; i < V; i++) {
        if (D.at(i) != INF) cout << D.at(i) << endl;
        else cout << "INF" << endl;
    }
    return;
}
int main() {
    long long V, E; cin >> V >> E;
    long long start;
    cin >> start;
    Graph G;
    vector<long long>D(V, INF);
    D.at(start) = 0;
    if (E == 0) {
        for (long long i = 0; i < V; i++) {
            cout << D.at(i) << endl;
        }
        return 0;
    }
    for (long long i = 0; i < E; i++) {
        Edge A;
        cin >> A.from >> A.to >> A.cost;
        G.push_back(A);
    }
    Bellman_Ford(G, D, V, start, E);
}
