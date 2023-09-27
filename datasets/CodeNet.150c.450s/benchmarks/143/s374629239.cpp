#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

void solve(){

    ll n; cin >> n;
    vector<ll> arr ((int)1e5+100, 0);
    ll sm = (ll)0;
    for(ll i = 0; i < n; ++i){
        ll x; cin >> x;
        sm += x;
        ++arr[x];
    }
    ll q; cin >> q;
    while(q--){
        ll b, c; cin >> b >> c;
        if(b == c){
            cout << sm << "\n";
            continue;
        }
        sm += (c - b) * arr[b];
        arr[c] += arr[b];
        arr[b] = 0;
        cout << sm << "\n";
    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

	return 0;
}

