#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int N = 2e5 + 1;
int d[N],n,m;
bool avail[N];
vector <int> adj[N];
queue <int> Q;

void bfs(int x){
    avail[N] = true;
    Q.push(x);
    d[x] = 0;
    while (!Q.empty()){
        int u = Q.front(); Q.pop();
        for (auto v : adj[u])
            if (!avail[v]){
                avail[v] = true;
                d[v] = u;
                Q.push(v);
            }
    }
}
int main(){
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    bool check = true;
    for (int i = 2; i <= n; i++)
        if (d[i] == 0) check = false;
    if (check == false) cout << "No";
    else{
        cout << "Yes\n";
        for (int i = 2; i <= n; i++) cout << d[i] << "\n";
    }
    return 0;
}