#include <cstdio>
#include <cstring>

using namespace std;

typedef long long ll;

int n;
int a[100];

ll dp[100][21];

ll rec(int i, int j) {
    if (j < 0 || j > 20) {
        return 0;
    }

    if (dp[i][j] >= 0) {
        return dp[i][j];
    }
    
    ll res;

    if (i == n - 2) {
        res = j == a[n - 1] ? 1LL : 0LL;
    } else {
        res = rec(i + 1, j - a[i + 1]) + rec(i + 1, j + a[i + 1]);
    }

    return dp[i][j] = res;
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
	    scanf("%d", &a[i]);
    }

    memset(dp, -1, sizeof(dp));

    printf("%lld\n", rec(0, a[0]));
}