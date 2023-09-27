#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int INF = (1<<30) - 1;
const ll LINF = (1LL<<60) - 1;

int d[100010];
int par[100010];

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        a--; b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }

    priority_queue<pii, vector<pii>, greater<pii>> que;
    fill(d, d+n, INF);
    d[0] = 0;
    par[0] = 0;
    que.push(pii(0, 0));

    while(!que.empty()){
        pii p = que.top();
        que.pop();
        int nv = p.second;
        if(d[nv] < p.first) continue;

        for (int i = 0; i < G[nv].size(); ++i) {
            int to = G[nv][i];
            if(d[to] > d[nv] + 1){
                d[to] = d[nv] + 1;
                par[to] = nv;
                que.push(pii(d[to], to));
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; ++i) {
        cout << par[i] + 1 << endl;
    }
}