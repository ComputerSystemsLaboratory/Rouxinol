#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a[4], b[4];
    while (scanf("%d", a) != EOF) {
        rep (i, 3) scanf("%d", a+i+1);
        rep (i, 4) scanf("%d", b+i);
        int h = 0, k = 0;
        rep (i, 4) if (a[i] == b[i]) h++;
        rep (i, 4) rep (j, 4) if (a[i] == b[j]) k++;
        printf("%d %d\n", h, k-h);
    }
    return 0;
}