#include <cstdio>

int n;
int A[20];
int q;

int solve(int i, int m) {
    if (m == 0) return 1;
    if (i >= n) return 0;
    return solve(i+1, m) || solve(i+1, m-A[i]);
}

int
main(int argc, const char *argv[])
{
    scanf("%d", &n);
    for (int i = 0; i != n; ++i) scanf("%d", &A[i]);
    scanf("%d", &q);
    for (int i = 0; i != q; ++i) {
        int M;
        scanf("%d", &M);
        if (solve(0, M)) printf("yes");
        else printf("no");
        putchar('\n');
    }
    return 0;
}