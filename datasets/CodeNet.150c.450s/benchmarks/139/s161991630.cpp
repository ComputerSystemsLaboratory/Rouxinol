#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<int> to[200005];
vector<int> ans;

void bfs (int v) {
    queue<int> q;
    for (int u : to[v]) {
        q.push(u);
        ans[u] = v+1;
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int u : to[x]) {
            if (ans[u] != -1) continue;
            q.push(u);
            ans[u] = x+1;
        }
    }

    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    ans.resize(n);
    rep(i, n) ans[i] = -1;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    bfs(0);
    bool ok = true;
    for (int i = 1; i < n; i++) {
        if (ans[i] == -1) {
            ok = false; 
            break;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
        for (int i = 1; i < n; i++) {
            cout << ans[i] << endl;
        }
    } else {
        cout << "No" << endl;
    }
    
    
    return 0;
}