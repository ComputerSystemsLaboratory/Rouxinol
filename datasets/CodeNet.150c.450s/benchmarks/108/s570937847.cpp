#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n,0));
    rep(i,n){
        int u,k;
        cin >> u >> k;
        u--;
        rep(i,k){
            int v;
            cin >> v;
            v--;
            G[u][v] = 1;
        }
    }
    queue<int> q;
    vector<int> d(n,-1);
    d[0] = 0;
    q.push(0);
    while(!q.empty()){
        int p = q.front();
        q.pop();
        rep(i,n){
            if(G[p][i] == 1 && d[i] == -1){
                //cout << G[p][i] << " " << d[i] << endl;
                q.push(i);
                d[i] = d[p]+1;
                //cout << d[i] << endl;
            }
        }
    }
    rep(i,n){
        cout << i+1 << " " << d[i] << endl;
    }
    return 0;
}
