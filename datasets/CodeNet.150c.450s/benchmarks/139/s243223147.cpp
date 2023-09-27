#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using itn = int;

int main(void){
    int n,m;
    cin >> n >> m;
    int a[m],b[m];
    for(int i = 0;i < m;i++)cin >> a[i] >> b[i];
    
    vector<vector<int>> G(n+1);
    for(int i = 0;i < m;i++){
        a[i]--;b[i]--;
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    
    vector<bool> v(n+1,false);
    vector<int> ans(n+1);
    queue<int> que;
    que.push(0);
    
    while(!que.empty()){
        int p = que.front();
        que.pop();
        
        for(auto u : G[p]){
            if(v[u] == true)continue;
            que.push(u);
            ans[u] = p;
            v[u] = true;
        }
    }
    
    cout << "Yes" << endl;
    for(int i = 1;i < n;i++){
        cout << ans[i] + 1<< endl;
    }
}
