#include <cstdio>
int main()
{
    int a[4], b[4];
    while (scanf("%d%d%d%d", a, a+1, a+2, a+3) != EOF) {
        scanf("%d%d%d%d", b, b+1, b+2, b+3);
        int c = 0, d = 0;
        for (int i = 0; i < 4; ++i) if (a[i] == b[i]) c++;
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                if (i != j && a[i] == b[j]) d++;
        printf("%d %d\n", c, d);
    }
    return 0;
}