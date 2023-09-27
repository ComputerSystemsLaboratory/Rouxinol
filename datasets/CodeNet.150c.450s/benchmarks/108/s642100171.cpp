#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> lis;
vector<ll> dset;
ll d=0;

void find(ll p) {
    if(dset[p] == -1 || dset[p] > d) {
        dset[p] = d;
        d++;
        for(ll i:lis[p]) {
            find(i);
        }
        d--;
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
        lis.push_back(aaa);
        dset.push_back(-1);
    }
    find(0);
    for(ll i=0;i<n;i++) {
        cout << i+1<<" "<<dset[i]<<endl;
    }
}

