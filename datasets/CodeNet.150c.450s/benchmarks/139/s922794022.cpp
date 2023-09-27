#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(void){
    cout << "Yes" << endl;
    int n,m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int> dist(n,-1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto i:graph[v]){
            if(dist[i]!=-1) continue;
            dist[i]=dist[v]+1;
            que.push(i);
        }
    }
    rep(i,n){
        if(i==0) continue;
        int cnt=1e9;
        int d = -1;
        for(auto j:graph[i]){
            if(dist[j]<cnt){
                cnt = dist[j];
                d = j;
            }
        }
        cout << d+1 << endl;
    }
}