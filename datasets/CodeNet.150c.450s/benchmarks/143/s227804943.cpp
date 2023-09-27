#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, q, b, c;
map<ll, ll> occ;
ll sum;

int main() {
    scanf("%lld", &n);
    for(ll i = 0; i < n; ++i) {
        scanf("%lld", &b);
        occ[b]++;
        sum += b;
    }

    scanf("%lld", &q);
    for(ll i = 0; i < q; ++i) {
        scanf("%lld %lld", &b, &c);
        sum += (c - b) * occ[b];
        occ[c] += occ[b];
        occ[b] = 0;
        cout << sum << endl;
    }

    return 0;    
}