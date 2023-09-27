#include <stdio.h>
#include <algorithm>

int main(void)
{
    while(true) {
        int M=0,m=50000,n,sum=0;
        scanf("%d", &n);
        if(n==0) break;
        for(int i=0; i < n; i++)
        {
            int s;
            scanf("%d", &s);
            M = std::max(s, M);
            m = std::min(s, m);
            sum += s;
        }
        printf("%d\n", (sum-M-m)/(n-2));
    }

    return 0;

}