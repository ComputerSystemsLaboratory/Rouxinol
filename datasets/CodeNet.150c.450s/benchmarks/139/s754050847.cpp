#include <bits/stdc++.h>

#define F first
#define S second
#define int long long
#define inf 1000000000
#define mod 1000000007

using namespace std;

signed main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > g(n);
    for (int i = 0; i < m; i++){
        int v, u;
        cin >> v >> u;
        g[--u].push_back(--v);
        g[v].push_back(u);
    }
    vector<int> ans(n, -1);
    queue<int> q;
    q.push(0);
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (int i = 0; i < (int)g[cur].size(); i++){
            int nxt = g[cur][i];
            if (ans[nxt] == -1){
                ans[nxt] = cur+1;
                q.push(nxt);
            }
        }
    }
    for (int i = 1; i < n; i++){
        if (ans[i] == -1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
