#include <stdio.h>
#include <algorithm>

int main(void)
{

    while(true) {
        int a[100], b[100], sa=0, sb=0, c, n, m;
        int ans[2]={-1, -1};

        scanf("%d%d", &n, &m);
        if(n==0 && m==0) break;

        for(int i=0; i < n; i++)
            scanf("%d", &a[i]), sa += a[i];
        for(int i=0; i < m; i++)
            scanf("%d", &b[i]), sb += b[i];

        std::sort(a, a+n);
        std::sort(b, b+m);

        c = sa - sb;

        for(int i=0; i < n && ans[0] == -1; i++)
        {
            if(c%2) break;

            if(*std::lower_bound(b, b + m, a[i] - c/2) == a[i]-c/2)
                ans[0] = a[i], ans[1] = a[i]-c/2;
        }

        if(ans[0] == -1)
            printf("-1\n");
        else
            printf("%d %d\n", ans[0], ans[1]);


    }

    return 0;
}