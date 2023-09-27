#include <cstdio>

int main(void)
{
    int a, b, c;
    int count = 0;
    scanf("%d %d %d", &a, &b, &c);

    for (int i=a; i<=b; i++) {
        if (c % i == 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}