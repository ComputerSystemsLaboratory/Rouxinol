#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int n, m;
    cin >> n >> m;

    map<int, vector<int>> edge;
    for(int i=0; i<n+1; i++){
        edge[i] = {};
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    vector<int> prev(n+1, -1);
    prev[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int i=0; i<edge[now].size(); i++){
            int next = edge[now][i];
            if(prev[next] == -1){
                prev[next] = now;
                q.push(next);
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        if(prev[i] == -1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    for(int i=2; i<=n; i++){
        cout << prev[i] << endl;
    }

    return 0;
}