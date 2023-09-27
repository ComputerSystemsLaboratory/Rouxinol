#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void calc(const vector<vector<int> >& G, vector<int>& D) {
    queue<int> Q;
    D[1] = 0;
    Q.push(1);
    while (!Q.empty()) {
        int i = Q.front();
        Q.pop();
        for (int j = 1; j < G[i].size(); j++) {
            if (G[i][j] && D[j] == -1) {
                D[j] = D[i] + 1;
                Q.push(j);
            }
        }
    }
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
    calc(G, D);

    for (int i = 1; i <= n; i++) {
        cout << i << " " << D[i] << endl;
    }

    return 0;
}