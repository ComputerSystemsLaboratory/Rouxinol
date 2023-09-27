#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RREP(i, s, n) for (int i = s; i < (n); i++)
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
const ll MOD = 1000000007;
const ll INF = MOD * MOD;
const int inf = (1<<29);

int n, m;
vector<vector<int>> G;

void bfs() {
    vector<int> dist(n, -1);
    vector<int> pre(n, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for(auto nv : G[v]) {
            if (dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                pre[nv] = v;
                que.push(nv);
            }
        }
    }
    
    for(int i = 1; i < n; i++) {
        cout << pre[i] + 1 << endl;
        
    }
}




int main() {

    cin >> n >> m;
    G.assign(n, vector<int>());

    REP(i, m) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    cout << "Yes" << endl;
    
    bfs();

return 0;
}