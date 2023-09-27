#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n;
map<ll, ll> ans;

int main() {
    scanf("%lld", &n);
     for(ll x = 1; x <= 101; ++x) {
        for(ll y = 1; y <= 101; ++y) {
            for(ll z = 1; z <= 101; ++z) {
                if(x * x + y * y + z * z + x * y + y * z + x * z <= n) ans[x * x + y * y + z * z + x * y + y * z + x * z]++; 
            }
        }
    }

    for(ll i = 1; i <= n; ++i) printf("%lld\n", ans[i]);
    return 0;
}