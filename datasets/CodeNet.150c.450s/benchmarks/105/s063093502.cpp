#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
template<class T, class U> bool chmin(T& a, const U& b){ if(a > b){ a = b; return 1; } return 0; }

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll& i : a) cin >> i;
    string s;
    cin >> s;
    vector<ll> base;
    for(ll i = n; i--; ){
        if(s[i] == '0'){
            for(ll b : base) chmin(a[i], a[i] ^ b);
            if(a[i]) base.push_back(a[i]);
        }
        else{
            for(ll b : base) chmin(a[i], a[i] ^ b);
            if(a[i]){
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}