#include<stdio.h>
int main()
{
    int n[10];
    int i,j,k,max=0,max1=0,max2=0;
    for (i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
        if (n[i]>max)
        {
            max=n[i];
        }
    }
    printf("%d\n",max);
    for (j=0; j<10; j++)
    {
        if (n[j]>max1&&n[j]<max)
            max1=n[j];
    }
    printf("%d\n",max1);
    for (k=0; k<10; k++)
    {
        if (n[k]>max2&&n[k]<max1)
            max2=n[k];
    }
    printf("%d\n",max2);
    return 0;
}