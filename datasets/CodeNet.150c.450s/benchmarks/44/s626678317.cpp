#include "stdio.h"

int main ()
{
    int a[5],b[5];
    while(scanf("%d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&b[1],&b[2],&b[3],&b[4])!=EOF)
    {
        int hit = 0,blow = 0;
        for(int i = 1;i <= 4 ;i++)
            if (a[i]==b[i])
                hit++;

        for(int i = 1;i <= 4;i++)
            for(int j = 1;j <= 4;j++)
        {
            if (i!=j&&a[i]==b[j])
                blow++;
        }

        printf("%d %d\n",hit,blow);

    }
}