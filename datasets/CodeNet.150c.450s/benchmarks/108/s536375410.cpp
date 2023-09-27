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



int main(){
    int n;
    cin >> n;
    V<V<int>> g(n);
    rep(i,n) {
        int a;
        cin >> a;
        a--;
        int k;
        cin >> k;
        rep(j,k) {
            int b;
            cin >> b;
            b--;
            g[a].push_back(b);
        }
    }

    V<int> d(n,-1);
    d[0] = 0;
    queue<int> q;
    q.push(0);
    while(sz(q)) {
        int v = q.front(); q.pop();
        for(int nv : g[v]) {
            if(d[nv] != -1) continue;
            d[nv] = d[v] + 1;
            q.push(nv);
        }
    }

    rep(i,n) {
        printf("%d %d\n", i+1, d[i]);
    }
}
