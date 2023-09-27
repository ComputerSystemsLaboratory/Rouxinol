#include<stdio.h>
int a[110];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int t,sum=0,minj;
    for (int i=0;i<n;i++)
    {
        minj=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[minj])
                minj=j;
        }
        t=a[i];a[i]=a[minj];a[minj]=t;
        if(i!=minj) sum++;
    }
    printf("%d",a[0]);
    for (int i=1;i<n;i++)
        printf(" %d",a[i]);
    printf("\n");
    printf("%d\n",sum);
    return 0;
}