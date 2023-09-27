#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long INF = 1000000000000000000;
struct Edge {
    long long from;
    long long to;
    long long cost;
};
void Warshall_Floyd(long long V, vector<vector<long long>>& D) {
    for (long long k = 0; k < V; k++) {
        for (long long i = 0; i < V; i++) {
            for (long long j = 0; j < V; j++) {
                D.at(i).at(j) = min(D.at(i).at(j), D.at(i).at(k) + D.at(k).at(j));
            }
        }
    }
}
int main() {
    long long V, E; cin >> V >> E;
    vector<Edge>G(E);
    vector<vector<long long>>D(V, vector<long long>(V, INF));
    for (long long i = 0; i < V; i++) {
        D.at(i).at(i) = 0;
    }
    for (long long i = 0; i < E; i++) {
        cin >> G.at(i).from >> G.at(i).to >> G.at(i).cost;
        D.at(G.at(i).from).at(G.at(i).to) = G.at(i).cost;
    }
    Warshall_Floyd(V, D);
    for (long long i = 0; i < V; i++) {
        if (D.at(i).at(i) != 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (long long i = 0; i < V; i++) {
        for (long long j = 0; j < V; j++) {
            if (D.at(i).at(j) >= 999999802000000000) cout << "INF";
            else cout << D.at(i).at(j);
            if (j != V - 1) cout << ' ';
        }
        cout << endl;
    }
}
