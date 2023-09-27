#include<stdio.h>
using namespace std;

int a[105];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int x=0;
    int m;
    for(int i=0;i<n;i++)
    {
        int minv=1005;
        for(int g=i+1;g<n;g++)
        {
            if(a[g]<minv)
            {
                minv=a[g];
                m=g;
            }

        }
        if(a[m]<a[i])
            {
                int t=a[m];
            a[m]=a[i];
            a[i]=t;
            x++;
    }
}
    for(int i=0;i<n;i++)
        if(i!=n-1)
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    printf("%d\n",x);
    return 0;
}