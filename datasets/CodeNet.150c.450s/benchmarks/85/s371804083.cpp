#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int limN = 105;

int xs[limN], ys[limN];
ll dp[limN][limN];
bool usd[limN][limN];

ll memo(int l, int r) {
    if(l>=r)
        return 0;
    if(usd[l][r])
        return dp[l][r];
    usd[l][r] = true;
    ll &ans = dp[l][r];
    ans = (1LL<<62);
    for(int i=l; i<r; i++) {
        // printf("%d %d %d\n", xs[l], ys[i], ys[i+1]);
        // printf("considerando %d %d %d => %d %lld %lld\n", l, i, r, xs[l]*ys[i]*ys[r], memo(l, i), memo(i+1, r));
        ans = min(ans, xs[l]*ys[i]*ys[r] + memo(l, i) + memo(i+1, r));
    }
    return ans;
}

int main() {
    int N ;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d%d", &xs[i], &ys[i]);
    }
    printf("%lld\n", memo(0, N-1));
}

