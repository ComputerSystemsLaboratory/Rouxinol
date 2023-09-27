#include<stdio.h>
#include<algorithm>
using namespace std;
int a[500000/2+2],b[500000/2+2],c[5000005];
int maxn=1000000001;int sum=0;
void f(int l,int m,int r)
{
    int n1=m-l;
    int n2=r-m;
    for(int i=0;i<n1;i++)
    {
        a[i]=c[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=c[m+i];
    }
    a[n1]=maxn;
    b[n2]=maxn;
    for(int i=l,o=0,p=0;i<r;i++)
    {
        sum++;
        if(b[p]>a[o])
        {
            c[i]=a[o++];
        }
        else
        {
            c[i]=b[p++];
        }
    }
}
void fg(int l,int r)
{
    if(l+1<r)
    {
        int m=(l+r)>>1;
        fg(l,m);
        fg(m,r);
        f(l,m,r);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    fg(0,n);
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        printf("%d ",c[i]);
        else printf("%d\n",c[i]);
    }
    printf("%d\n",sum);
    return 0;
    }