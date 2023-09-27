#include <iostream>
int main() {
    int n,m,l;
    scanf("%d%d%d", &n, &m, &l);
    long a[n][m], b[m][l];
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) scanf("%ld", &a[i][j]);
    for (int i=0; i<m; i++) for (int j=0; j<l; j++) scanf("%ld", &b[i][j]);
    for (int i=0; i<n; i++) for (int j=0; j<l; j++) {
        long s=0;
        for (int k=0; k<m; k++) {
            s += a[i][k] * b[k][j];
        }
        printf("%ld", s);
        if (j < l - 1) printf(" ");
        else printf("\n");
    }
    return 0;
}