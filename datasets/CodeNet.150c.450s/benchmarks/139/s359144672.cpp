#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> d(n, -1), pre(n, -1);
    queue<int> que;
    que.push(0);
    d[0] = 0;
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto nv : g[v]) {
            if(d[nv] == -1) {
                d[nv] = d[v] + 1;
                pre[nv] = v;
                que.push(nv);
            }
        }
    }
    cout << "Yes" << endl;
    for(int i=1; i<n; i++) cout << pre[i] + 1 << "\n";
}