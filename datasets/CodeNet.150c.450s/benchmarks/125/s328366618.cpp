#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> G;
vector<int> used;
vector<int> found;
vector<int> done;

int dfs(int v, int t){
    if(used[v]){
        return done[v];
    }
    else{
        used[v] = 1;
        found[v] = t;
    }
    for(long long i=0; i<G[v].size(); i++){
        int nv = G[v][i];
        if(used[nv]) continue;
        else{
            t = dfs(nv, ++t);
        }
    }
    return done[v] = ++t;
}

int main(){
    int N; cin>>N;
    G.resize(N);
    used.resize(N, 0);
    found.resize(N, 0);
    done.resize(N, 0);
    found[0] = 1;
    for(long long i=0; i<N; i++){
        int u, k; cin >> u >>k;
        u--;
        G[u].resize(k);
        for(long long j=0; j<k; j++){
            int v; cin >> v;
            v--;
            G[u][j] = v;
        }
    }
    int t = 1;
    for(long long i=0; i<N; i++){
        if(used[i]) continue;
        t = dfs(i, t) + 1;
    }
    for(long long i=0; i<N; i++){
        cout << i+1 << " " << found[i] << " " << done[i] << endl;
    }
    return 0;
}
