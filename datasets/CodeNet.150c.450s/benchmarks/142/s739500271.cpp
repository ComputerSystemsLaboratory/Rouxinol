//written_by: Poushi
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   int n,k,i;
   scanf("%d %d", &n, &k);
   int ara[n];
   for(i=0; i<n; i++)
    scanf("%d", &ara[i]);
    for(i=k;i<n;i++)
    {
        if(ara[i]>ara[i-k]) printf("Yes\n");
        else printf("No\n");
    }
}
