#include <cstdio>
#include <algorithm>
using namespace std;
#define INF (1<<29)

int main(void) {
    int n, m, a;
    scanf("%d %d", &n, &m);
    int c[m + 1], t[n+1];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a);
        c[i] = a;
    }
    for (int i = 0; i <= n; i++) t[i] = INF;
    t[0] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= n - c[i]; j++) {
            t[j + c[i]] = min(t[j + c[i]], t[j] + 1);
        }
    }

    printf("%d\n", t[n]);

    return 0;
}