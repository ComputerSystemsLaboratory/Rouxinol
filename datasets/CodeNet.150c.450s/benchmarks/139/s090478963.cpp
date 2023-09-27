#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N=100099;
int n, m, par[N];
bool pos[N];
vector<int> graf[N];
void bfs() {
    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int tren=q.front(); q.pop();
        for(auto adj:graf[tren]) {
            if(!pos[adj]) {
                pos[adj]=true;
                par[adj]=tren;
                q.push(adj);
            }
        }
    }
}
int main() {
    IOS; cin >> n >> m;
    for(int i=0; i<m; ++i) {
        int u,v; cin >> u >> v;
        graf[u].push_back(v);
        graf[v].push_back(u);
    }
    bfs();
    cout << "Yes\n";
    for(int i=2; i<=n; ++i) cout << par[i] << endl;
}
