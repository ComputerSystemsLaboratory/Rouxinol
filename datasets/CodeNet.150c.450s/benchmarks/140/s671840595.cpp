#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;


struct UnionFind {
    vector<int> par;
    UnionFind(int N) : par(N) {
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    ios_base::sync_with_stdio(false);

    int n,m;
    cin >> n >> m;
    vector<pair<int,P>> p(m);
    rep(i,m) {
        int s,t,d;
        cin >> s >> t >> d;
        p[i].first=d;
        p[i].second=make_pair(s,t);
    }
    sort(p.begin(),p.end());
    int cnt=0;
    UnionFind tree(n);
    ll ans=0;
    rep(i,m) {
        if (!tree.same(p[i].second.first,p[i].second.second)) {
            ans+=p[i].first;
            tree.unite(p[i].second.first,p[i].second.second);
        }
    }
    cout << ans << endl;


    return 0;   
}

