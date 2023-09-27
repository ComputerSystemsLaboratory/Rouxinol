#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> mat(n,vector<ll>(n,0));
    for(ll i=0;i<n;i++) {
        ll u,k;
        cin>>u>>k;
        for(ll j=0;j<k;j++) {
            ll tmp;
            cin>>tmp;
            mat[u-1][tmp-1] = 1;
        }
    }
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            if(j<n-1) {
                cout << mat[i][j] << " ";
            }else {
                cout << mat[i][j];
            }
        }
        cout << endl;
    }
}

