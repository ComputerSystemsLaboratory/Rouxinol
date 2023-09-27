#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX = 500000;
const ll INF = 1LL<<60;

ll cnt;

ll partition(vector<ll> &seq, ll p, ll right) {
    ll x = seq.at(right);
    ll i = p - 1;
    for( ll j = p; j < right; j++) {
        if( seq.at(j) <= x) {
            i++;
            ll temp = seq.at(i); seq.at(i) = seq.at(j); seq.at(j) = temp;
        }
    }
    ll temp = seq.at(i+1); seq.at(i+1) = seq.at(right); seq.at(right) = temp; 

    return i + 1;
}

signed main() {
    ll n; cin >> n; 
    vector<ll> seq(MAX);
    for( ll i = 0; i < n; i++ ) cin >> seq.at(i);

    ll p = partition(seq, 0, n-1);
    for( ll i = 0; i < n; i++) {
        if( i == p ) cout << '[' << seq.at(i) << ']';
        else cout << seq.at(i);
        if(i < n-1) printf(" ");
    }
    cout << endl;

    return 0;
}



