#include <cstdio>
using namespace std;

int n, m, A[3000];

bool dfs(int s, int i) {
    if (i == n) return s == m;
    return dfs(s + A[i], i + 1) || dfs(s, i + 1);
}

int main(void) {
    int q, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &m);
        if (dfs(0, 0)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}