#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int arr[2000100], c[100001], ans[2000100];

int main()
{
    int i, n;
    scanf("%d", &n);

        memset(c, 0, sizeof(c));

        for(i = 1; i <= n; ++i)
        {
            scanf("%d", &arr[i]);
            ++c[arr[i]];
        }

        for(i = 1; i < 100001; ++i)
            c[i] = c[i] + c[i - 1];

        for(i = n; i > 0; --i)
        {
            ans[c[arr[i]]] = arr[i];
            --c[arr[i]];
        }

        for(i = 1; i < n; ++i)
            printf("%d ", ans[i]);
            printf("%d\n", ans[n]);

    return 0;
}