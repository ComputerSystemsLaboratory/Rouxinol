#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> ans(n+1);
    vector<bool> flag(n+1, true);
    // init
    vector<vector<int>> g(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int> que;
    que.push(1);
    flag[1] = false;
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int i : g[v]){
            if(flag[i]){
                que.push(i);
                ans[i] = v;
                flag[i] = false;
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 2; i <= n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
