#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int N, nmin, nmax, pcurr, pprev, maxi, maxv;
    for (;;) {
        scanf("%d %d %d", &N, &nmin, &nmax);
        if (N == 0 && nmin == 0 && nmax == 0) break;
        maxi = -1, maxv = 0;
        scanf("%d", &pprev);
        for (int i = 2; i <= N; i++) {
            scanf("%d", &pcurr);
            if (i > nmin && i <= nmax + 1 && pprev - pcurr >= maxv) maxv = pprev - pcurr, maxi = i -1;
            pprev = pcurr;
        }
        printf("%d\n", maxi);
    }
    return 0;
}
