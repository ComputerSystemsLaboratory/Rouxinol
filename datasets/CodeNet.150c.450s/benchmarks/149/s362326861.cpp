#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct union_find_tree{

    vector<ll> par;

    union_find_tree(ll n) {
        par.resize(n);
        for(ll i=0;i<n;i++) {
            par[i] = i;
        }
    }

    ll find(ll a) {
        if(par[a] == a)return a;
        return par[a] = find(par[a]);
    }

    void unite(ll a,ll b) {
        par[find(a)] = find(b);
    }

    bool same(ll a,ll b) {
        return find(a) == find(b);
    }

};

int main() {
    ll n,q;
    cin >> n >> q;
    union_find_tree uni(n);
    for(ll i=0;i<q;i++) {
        ll c,x,y;
        cin>>c>>x>>y;
        if(c==0) {
            uni.unite(x,y);
        }else {
            if(uni.same(x,y)) {
                cout << 1 << endl;
            }else {
                cout << 0 << endl;
            }
        }
    }
}


