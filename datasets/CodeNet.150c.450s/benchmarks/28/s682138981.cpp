#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

typedef long long ll;

const int MAX = 100001;
ll n, k;
ll w[MAX];

ll check(ll p) {
    ll i = 0;
    for (int j = 0; j < k; j++) {
        ll s = 0;
        while (s + w[i] <= p) {
            s += w[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

ll binSearch(ll lo, ll hi) {
    while (hi - lo > 1) {
        ll mi = (lo + hi) >> 1;
        ll v = check(mi);
        if (v >= n) hi = mi;
        else lo = mi;
    }
    return hi;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%lld %lld", &n, &k);
    for (int i = 0; i < n; i++) scanf("%lld", &w[i]);
    ll p = binSearch(0, 100000LL * 10000LL);
    printf("%lld\n", p);
    return 0;
}