#include <cstdio>

int main()
{
    int n;
    int i = 1;

    while (scanf("%d", &n) == 1 && n != 0) {
        printf("Case %d: %d\n", i, n);
        i++;
    }
}