#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;
int N;
int d[110], f[110];
vector<vector<int> > adj(110);
void dfs(int cur){
    d[cur] = t;
    t += 1;
    //cerr << "visiting " << cur << " " << t << endl;
    for(int i = 0; i < adj[cur].size(); ++i){
        int dst = adj[cur][i];
        if(d[dst] == 0){
            dfs(dst);
        }
    }
    f[cur] = t;
    t++;
}

int main(){
    cin >> N;
    t = 1;
    int u, k;
    for(int i = 0; i < N; ++i){
        d[i] = 0;
        f[i] = 0;
    }
    for(int i = 0; i < N; ++i){
        cin >> u >> k;
        for(int j = 0; j < k; j++){
            int v;
            cin >> v;
            adj[u].push_back(v);
        }
        sort(adj[u].begin(), adj[u].end());
    }
    for(int i = 1; i < N+1; ++i){
        if(d[i] == 0) dfs(i);
    }
    
    for(int i = 1; i < N+1; ++i){
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
}