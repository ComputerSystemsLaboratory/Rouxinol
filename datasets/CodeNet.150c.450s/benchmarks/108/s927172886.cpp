#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define rep(i,n) for (int i = 0; i < int(n); i++)
#define show(x) #x " = " << x

int n;
vector<int> G[100];
int d[100];

int main() {
    cin >> n;
    rep (i,n) {
        int u, k, v;
        cin >> u >> k;
        rep (i,k) cin >> v, G[u-1].push_back(v-1);
    }
    rep (i,100) d[i] = -1;

    queue<int> q;
    q.push(0);
    d[0] = 0;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        rep (i,G[v].size()) {
            int x = G[v][i];
            if (d[x] == -1) {
                d[x] = d[v] + 1;
                q.push(x);
            }
        }
    }
    rep (i,n) cout << i+1 << " " << d[i] << endl;
        
}