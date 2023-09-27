#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void calc(const vector<vector<int> >& G, vector<int>& D,
                                        queue<int>& Q, int dim) {
    if (Q.empty()) return;
    queue<int> Q2;
    while (!Q.empty()) {
        int i = Q.front();
        for (int j = 1; j < G[i].size(); j++) {
            if (G[i][j] && D[j] == -1) {
                Q2.push(j);
                D[j] = dim;
            }
        }
        Q.pop();
    }
    calc(G, D, Q2, dim + 1);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[u][v] = 1;
        }
    }
    vector<int> D(n + 1, -1);
    queue<int> Q;
    Q.push(1);
    D[1] = 0;
    calc(G, D, Q, 1);

    for (int i = 1; i <= n; i++) {
        cout << i << " " << D[i] << endl;
    }

    return 0;
}