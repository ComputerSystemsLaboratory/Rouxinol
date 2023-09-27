#include <cstdio>

using namespace std;

#define rep(i, N) for (ll i = 0; i < N; ++i)
typedef long long int ll;

static const ll MAX = 100000;
ll T[MAX];
ll n, k;

int check(ll p) {
    int i = 0;
    rep(j, k) {
        ll s = 0;
        while (s + T[i] <= p) {
            s += T[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

int calc() {
    ll l = 0, m;
    ll r = MAX * 10000;
    while (r - l > 1) {
        m = (l + r) / 2;
        if (check(m) >= n) r = m;
        else l = m;
    }
    return r;
}

// Allocation
int main() {
    scanf("%d %d", &n, &k);
    rep(i, n) scanf("%d", &T[i]);

    int ans = calc();

    printf("%d\n", ans);
    return 0;
}

