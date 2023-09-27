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

ll MinimumSpanningTree(const V<V<pair<ll, int>>> &g, int n) { // 最小全域木
    using pi = pair<ll,int>; // pair = (cost, to);
    ll res = 0;

    vector<int> v;
    v.push_back(0);
    priority_queue<pi, vector<pi>, greater<pi>> pq; 
    vector<bool> seen(n);
    seen[0] = true;
    for(pi nv : g[0]) {
        pq.push(nv);
    }

    while(sz(v) != n) {
        pi p = pq.top(); pq.pop();
        if(seen[p.se]) continue;
        v.push_back(p.se);
        seen[p.se] = true;
        res += p.fi;
        for(pi nv : g[p.se]) {
            if(!seen[nv.se])
                pq.push(nv);
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    V<V<pair<ll,int>>> g(n);
    rep(i,n)rep(j,n) {
        ll a;
        cin >> a;
        if(a == -1) continue;
        g[i].emplace_back(a,j);
    }
    ll ans = MinimumSpanningTree(g,n);
    cout << ans << endl;
}
