#include <cstdio>
#include <algorithm>
using namespace std;

int MatrixChainMaltiplication(int *p, int n) {
    int m[n+1][n+1];
    for (int i=0; i<=n; i++) m[i][i] = 0;

    for (int l=2; l<=n; l++) {
        for (int i=1; i<=(n-l+1); i++) {
            int j = i + l - 1;
            m[i][j] = (1 << 21);
            for (int k=i; k<=j-1; k++) {
                m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
            }
        }
    }
    return m[1][n];
}

int
main()
{
    int n;
    scanf("%d", &n);
    int p[n+1];
    for (int i=0; i<n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (i == 0) p[i] = a;
        p[i+1] = b;
    }
    printf("%d\n", MatrixChainMaltiplication(p, n));
    return 0;
}