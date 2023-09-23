#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, a[3];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        bool flag = false;
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        for (int j = 0; j < 3; ++j) {
            if (a[j] * a[j] == (a[(j + 1) % 3] * a[(j + 1) % 3] + a[(j + 2) % 3] * a[(j + 2) % 3])) {
                flag = true;
            }
        }
        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}