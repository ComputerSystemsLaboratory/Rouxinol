#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int count = 0;
bool isConstruction[16][16];
int a,b;

void rec(int i, int j) {
    if (isConstruction[i][j]) {
        return ;
    }

    if (i == a && j == b) {
        count += 1;
        return;
    }

    if (i != a) {
        rec(i+1, j);
    }

    if (j != b) {
        rec(i, j+1);
    }
}

int main() {
    while (1) {
        int i;
        int n;

        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) return 0;

        a -= 1;
        b -= 1;

        for (i=0;i<16;i++) {
            int j;
            for (j=0;j<16;j++) {
                isConstruction[i][j] = 0;
            }
        }

        scanf("%d", &n);
        for (i=0;i<n;i++) {
            int i, j;
            scanf("%d %d", &i, &j);
            isConstruction[i-1][j-1] = 1;
        }

        count = 0;
        rec(0, 0);

        printf("%d\n", count);
    }
}