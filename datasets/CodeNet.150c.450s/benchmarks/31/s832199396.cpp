#include<iostream>
#include<cstdio>
using namespace std;
int a[200000];
int main()
{
    int n,minn,ans=-2100000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    minn=a[0];
    for(int i=1;i<n;i++)
    {
        ans=max(ans,a[i]-minn);
        minn=min(minn,a[i]);
    }
    printf("%d\n",ans);
    return 0;
}

