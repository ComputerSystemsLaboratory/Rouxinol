#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ver{
    ll d;
    ll f;
};

ll t=0;
vector<vector<ll>> mat;
vector<ver> vers;

void find(ll pos) {
    if(vers[pos].d == 0){
        t++;
        vers[pos].d = t;
        for(ll i:mat[pos]) {
            find(i);
        }
        if(vers[pos].f == 0) {
            t++;
            vers[pos].f = t;
        }
    }
}

int main() {
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++) {
        ll u,k;
        cin>>u>>k;
        vector<ll> aaa;
        for(ll j=0;j<k;j++) {
            ll tmp;
            cin>>tmp;
            aaa.push_back(tmp-1);
        }
        mat.push_back(aaa);
    }
    for(ll i=0;i<n;i++) {
        vers.push_back(ver{0,0});
    }
    for(ll i=0;i<n;i++) {
        if(vers[i].d == 0)find(i);
    }
    for(ll i=0;i<n;i++) {
        cout << i+1<<" "<<vers[i].d<<" "<<vers[i].f<<endl;
    }
}

