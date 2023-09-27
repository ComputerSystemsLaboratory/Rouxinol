#include<stdio.h>
#define MAX 44

int FN[MAX+1];

int main() {
    int i, n;
    FN[0] = FN[1] = 1;

    scanf("%d", &n);
    for (i=2; i<=n; i++) {
        FN[i] = FN[i-1] + FN[i-2];
    }

    printf("%d\n", FN[n]);

    return 0;
}
