#include<bits/stdc++.h>
using namespace std;
int ar[2000010], br[100010], cr[2000010];

int main()
{
    int i, n;
    scanf("%d", &n);

        memset(br, 0, sizeof(br));

        for(i = 1; i <= n; ++i)
        {
            scanf("%d", &ar[i]);
            ++br[ar[i]];
        }

        for(i = 1; i < 100001; ++i)
            br[i] = br[i] + br[i - 1];

        for(i = n; i > 0; --i)
        {
            cr[br[ar[i]]] = ar[i];
            --br[ar[i]];
        }

        for(i = 1; i < n; ++i)
            printf("%d ", cr[i]);
            printf("%d\n", cr[n]);

    return 0;
}