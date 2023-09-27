#include <cstdio>
#include <algorithm>

int main(void)
{
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (!a && !b)
            break;
        if (a > b)
            std::swap(a, b);
        printf("%d %d\n", a, b);
    }

    return 0;
}