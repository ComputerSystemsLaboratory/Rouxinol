#include <stdio.h>

void swap(int* x, int* y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}

int main(void)
{
    int i, len1, len2, len3, n_iteration;

    scanf("%d", &n_iteration);

    for (i = 0; i < n_iteration; i++) {
        scanf("%d %d %d", &len1, &len2, &len3);
        if (len2 < len3) {
            swap(&len2, &len3);
        }
        if (len1 < len2) {
            swap(&len1, &len2);
        }
        if (len1 * len1 == len2 * len2 + len3 * len3) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}    