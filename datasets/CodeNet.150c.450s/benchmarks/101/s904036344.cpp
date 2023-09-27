#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> G[100005];
vector<int> color(100005, -1);
vector<bool> seen(100005, false);

void dfs(int now, int id){
    seen[now] = true;
    color[now] = id;

    for(int i=0; i<G[now].size(); ++i){
        int to = G[now][i];
        if(!seen[to]) dfs(to, id);
    }
}

int main(){
    
    int m; cin >> n >> m;
    for(int i=0; i<m; ++i){
        int a,b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int id = 0;
    for(int i=0; i<n; ++i){
        if(!seen[i]){
            ++id;
            dfs(i, id);
        }
    }

    int q; cin >> q;
    for(int i=0; i<q; ++i){
        int s, t; cin >> s >> t;
        if(color[s] == color[t]) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
