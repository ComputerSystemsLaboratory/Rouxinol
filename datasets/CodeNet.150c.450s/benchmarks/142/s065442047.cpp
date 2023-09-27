#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, k, a[200007];

int main() {
   scanf("%lld %lld", &n, &k);
    for(ll i = 1; i <= n; ++i) scanf("%lld", &a[i]);

    for(ll i = k + 1; i <= n; ++i) {
        if(a[i] > a[i - k]) {
            printf("Yes\n");
        } else printf("No\n");
    }

    return 0;
}