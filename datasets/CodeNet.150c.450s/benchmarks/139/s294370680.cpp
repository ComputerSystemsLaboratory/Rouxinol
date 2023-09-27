#include <bits/stdc++.h>
using namespace std;

#define pb	push_back
#define eb	emplace_back
#define mk	make_pair
#define fi	first
#define se	second
#define endl	'\n'

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
const int T = 1e5+5;
int ans[T];
vector<int> g[T];

bool bfs(int need) {
    queue<int> fila;
    fila.push(1);
    ans[1] = 1;

    while(!fila.empty()) {
        int u = fila.front();
        fila.pop();
        need--;
        for(int v : g[u]) {
            if(!ans[v]) {
                ans[v] = u;
                fila.push(v);
            }
        }
    }
    return (!need);
}

int main() {
    ios_base::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;

    while(m--) {
        int u,v; cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    if(bfs(n)) {
        cout << "Yes\n";
        for(int i = 2; i <= n; i++) cout << ans[i] << endl;
    } else cout << "No\n";

    return 0;
}

