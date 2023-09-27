#include <cstdio>

int w[100002];

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d\n", &n, &k);
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d\n", &w[i]);
        if (w[i] > l)
            l = w[i];
        r += w[i];
    }

    while (l < r)
    {
        int m = (l + r) / 2;
        int s = 0, c = 1;
        for (int i = 0; i < n; ++i)
        {
            s += w[i];
            if (s > m) {
                s = w[i];
                c++;
            }
        }
        if (c <= k)
            r = m;
        else
            l = m + 1;
    }

    printf("%d\n", r);
    return 0;
}