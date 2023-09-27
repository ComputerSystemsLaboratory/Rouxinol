#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=100000+10;
int n;
int a[maxn];
int partition(int a[],int p,int r)
{
   int x=a[r];
   int i=p-1;
   for(int j=p;j<r;j++)
   {
       if(a[j]<=x)
       {
           i++;
           swap(a[i],a[j]);
       }
   }
   swap(a[i+1],a[r]);
   return i+1;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int res=partition(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        if(i) printf(" ");
        if(i==res) printf("[");
        printf("%d",a[i]);
        if(i==res) printf("]");
    }
    printf("\n");

    return 0;
}