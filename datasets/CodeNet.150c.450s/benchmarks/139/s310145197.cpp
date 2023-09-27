#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> ans(n,-1);
    queue<int> q;
    q.push(0);
    while(q.empty() == false){
        int v = q.front(); q.pop();
        for(int adjacent_v : graph[v]){
            if(ans[adjacent_v] == -1){
                ans[adjacent_v] = v;
                q.push(adjacent_v);
            }
        }
    }
    cout << "Yes" << endl;
    for(int i=1; i<n; i++) cout << ans[i] + 1 << endl;
    return 0;
}