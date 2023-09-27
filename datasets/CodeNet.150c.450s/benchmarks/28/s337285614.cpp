#include <iostream>

using namespace std;

typedef long long LL;

const int N = 100010;

int n, k, w[N];

int check(LL p)
{
    int cnt = k;
    int i = 0;
    while (cnt--) {
        LL v = p;
        while (w[i] <= v) {
            v -= w[i];
            i++;
            if (i == n)
                return i;
        }
    }
    return i;
}

int main()
{
    int max_p = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &w[i]);
        max_p = max(max_p, w[i]);
    }
    
    LL l = 0, r = max_p * n;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid) >= n)
            r = mid;
        else
            l = mid + 1;
    }
    printf("%lld\n", r);
    return 0;
}
