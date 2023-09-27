#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=100000+10;
int n,k;
int a[maxn];

int C(int m)
{
    int j=k;
    int i=0;

    while(j--)
    {
          int sum=0;
        while(sum+a[i]<=m)
        {
            sum+=a[i++];
            if(i==n) return n;
        }
    }
    return i;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int left=0,right=maxn*10000;
    while(right-left>1)
    {
        int mid=(left+right)/2;
        if(C(mid)<n) left=mid;
        else right=mid;
    }
    printf("%d\n",right);


    return 0;
}