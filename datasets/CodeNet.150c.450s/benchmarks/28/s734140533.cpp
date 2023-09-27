#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000

ll n, k;
vector<ll> T(MAX);

ll check(ll P) {
    ll i = 0;
    for( ll j = 0; j < k; j++) {
        ll s = 0;
        while( s + T.at(i) <= P) {
            s +=  T.at(i);
            i++;
            if( i == n ) return n;
        }
    }
    return i;
}

ll solve() {
    ll left = 0;
    ll right = 100000 * 10000;
    while(right - left > 1) {
        ll mid = (right + left) / 2;
        ll v = check(mid);
        if( v >= n ) right = mid;
        else left = mid;
    }

    return right;
}
int main() {
    cin >> n >> k;
    for(ll i = 0; i < n; i++) cin >> T.at(i);

    cout << solve() << endl;
    
    return 0;
}


