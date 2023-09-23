#include "stdio.h"

int main ()
{
    int a[6],b[6];
    while (scanf("%d%d%d%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&b[1],&b[2],&b[3],&b[4])!=EOF)
    {
        int hit=0,blow=0,i,j;
        for (i=1;i<=4;i++)
            if (a[i]==b[i])
                hit++;

        for (i=1;i<=4;i++)
            for(j=1;j<=4;j++)
            {if (a[i]==b[j])
                blow++;
            }

        printf("%d %d\n",hit,blow-hit);

    }
}