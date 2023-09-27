#include <cstdio>

using namespace std;

#define rep(i, N) for (ll i = 0; i < N; ++i)
typedef long long int ll;
ll n, A[50];

int solve(ll i, ll m) {
    if (m == 0) return 1;
    if (i >= n) return 0;
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main() {
    scanf("%d", &n);
    rep(i, n) scanf("%d", &A[i]);
    ll q, m;
    scanf("%d", &q);
    rep(j, q) {
        scanf("%d", &m);
        if (solve(0, m)) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}

