#include <cstdio>

int main(void)
{
    int n = 1;
    int i = 1;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("Case %d: %d\n", i++, n);
    }

    return 0;
}