#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define Rep(i,n) for(int i = 1; i <= n; i++)
#define sz(x) int(x.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define YesorNo(a) printf(a ? "Yes\n" : "No\n")
#define endl '\n'
#define fi first
#define se second
using ll = long long;
using P = pair<int,int>;
using Pl = pair<ll,ll>;
template<class T> using V = vector<T>;
const int dx[] = {0,1,0,-1,1,1,-1,-1};
const int dy[] = {1,0,-1,0,1,-1,-1,1};
const int inf = (1<<30)-1;
const ll infll = (1LL<<62)-1;
ll ceil(const ll &a, const ll &b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

void dfs(int v, int &t, const V<V<int>> &g, V<P> &time) {

    t++;
    time[v].fi = t;
    for(int nv : g[v]) {
        if(time[nv].fi) continue;
        dfs(nv, t, g, time);
    }
    t++;
    time[v].se = t;
}

int main(){

    int n;
    cin >> n;
    V<V<int>> g(n);
    rep(i,n) {
        int a, k;
        cin >> a >> k;
        a--;
        rep(j,k) {
            int b;
            cin >> b;
            b--;
            g[a].push_back(b);
        }
    }
    V<P> time(n);
    int t = 0;
    rep(i,n) {
        if(time[i].fi) continue;
        dfs(i, t, g, time);
    }
    rep(i,n) {
        printf("%d %d %d\n", i+1, time[i].fi, time[i].se);
    }
}
