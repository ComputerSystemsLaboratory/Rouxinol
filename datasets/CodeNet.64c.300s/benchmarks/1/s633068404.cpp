#include<iostream>
#include<cstdio>
using namespace std;
#define maxn 100005
int a[maxn];
int _partition(int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<r;++j)
    {
        if(a[j]<=x)
        {
            ++i;
            int k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
    int k=a[i+1]; a[i+1]=a[r]; a[r]=k;
    return i+1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    int q=_partition(0,n-1);
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        if(i==q)
            printf("[");
        printf("%d",a[i]);
        if(i==q)
            printf("]");
    }
    printf("\n");
    return 0;
}