#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int a[1000],i,n;
    n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,a+n);

    int j;
    for(j=i-1;j>=7;j--)
    {
        printf("%d\n",a[j]);
    }


    return 0;
}