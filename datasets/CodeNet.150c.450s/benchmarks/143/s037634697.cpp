#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll res = 0;
    map<ll, ll> memo;
    for(ll i=0; i<n; ++i){
        cin >> a[i]; 
        memo[a[i]]++; res += a[i];
    }
    
    ll q; cin >> q;
    vector<ll> b(q), c(q);
    for(ll i=0; i<q; ++i){
        cin >> b[i] >> c[i];
        res -= b[i] * memo[b[i]];
        res -= c[i] * memo[c[i]];
        
        memo[c[i]] += memo[b[i]];
        memo[b[i]] = 0;
        res += c[i] * memo[c[i]];
        
        cout << res << endl;
    }
    return 0;
}