#include <cstdio>
#include <algorithm>
using namespace std;
#define INF (1<<29)

int main(void) {
    int N, W, ans = 0;
    scanf("%d %d", &N, &W);
    int v[N], w[N], t[W+1];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &v[i], &w[i]);
    }

    for (int i = 0; i <= W; i++) t[i] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = W - w[i]; j >= 0; j--) {
            t[j + w[i]] = max(t[j + w[i]], t[j] + v[i]);
            ans = max(ans, t[j + w[i]]);
        }
    }

    printf("%d\n", ans);

    return 0;
}