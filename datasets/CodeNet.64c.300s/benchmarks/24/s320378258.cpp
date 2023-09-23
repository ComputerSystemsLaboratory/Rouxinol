#include <stdio.h>

int main() {
    int n, i, num[2], result[2] = { 0,0 };

    while (scanf("%d", &n)) {
        if (n == 0) break;

        result[0] = 0;
        result[1] = 0;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &num[0], &num[1]);
            if (num[0] > num[1]) result[0] += num[0] + num[1];
            else if (num[0] < num[1]) result[1] += num[0] + num[1];
            else result[0] += num[0], result[1] += num[1];
        }
        printf("%d %d\n", result[0], result[1]);
    }

    return 0;
}