#include <iostream>
#include <vector>
using namespace std;

vector<int> G[100000], color(100000);
int c;
void dfs(int v) {
    color[v] = c;
    for (int i = 0; i < G[v].size(); ++i) {
        int e = G[v][i];
        if (!color[e]) dfs(e);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    for (int i = 0; i < n; ++i) {
        if (!color[i]) {
            c++;
            dfs(i);
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
