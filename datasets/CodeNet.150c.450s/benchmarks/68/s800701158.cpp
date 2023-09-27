#include<bits/stdc++.h>

using namespace std;
using ll = long long int;
#define long ll

int main(void) {
    cin.tie(0); ios::sync_with_stdio(false);

    ll n;
    while(cin >> n) {
        if(!n) break;
        vector<ll> a(n);
        for(auto &e: a) cin >> e;
        ll r = 1e9;
        sort(a.begin(), a.end());
        for(ll i=0; i<n-1; i++)
            r = min(r, abs(a[i+1] - a[i]));
        cout << r << endl;
    }
}

