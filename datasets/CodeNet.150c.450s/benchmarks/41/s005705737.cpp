#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<int,int>;
const ll inf = 1e18;

int v;
ll dis[105][105];

void warshall_floyd() {
    rep(k,v)rep(i,v)rep(j,v) {
        if (dis[i][k] == inf || dis[k][j] == inf) continue;
        dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
    }
}

int main() {
    int e;
    cin >> v >> e;
    rep(i,v)rep(j,v) dis[i][j] = inf;
    rep(i,e) {
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = c;
    }
    rep(i,v) dis[i][i] = 0;
    warshall_floyd();
    bool ok = true;
    rep(i,v) if(dis[i][i] < 0) ok = false;
    if (!ok) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i,v) {
        rep(j,v) {
            if (dis[i][j] == inf) {
                cout << "INF";
            }
            else cout << dis[i][j];
            if (j != v-1) cout << " ";
        }
        cout << endl;
    }
}
