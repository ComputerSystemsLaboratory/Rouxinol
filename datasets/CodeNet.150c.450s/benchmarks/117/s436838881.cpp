#include<bits/stdc++.h>
#define maxn 500010
#define INF 1000000100
using namespace std;
int flag,n;
int a[maxn];

void Merge(int l,int m,int r)
{
    int n1=m-l;
    int n2=r-m;
    int b[n1+1],c[n2+1];
    for(int i=0;i<n1;i++)
        b[i]=a[l+i];
    for(int i=0;i<n2;i++)
        c[i]=a[m+i];
    int i=0,j=0;
    b[n1]=INF;
    c[n2]=INF;
    for(int k=l;k<r;k++)
    {
        flag++;
        if(b[i]<=c[j])
            a[k]=b[i++];
        else
            a[k]=c[j++];
    }
}
void MergeSort(int l,int r)
{
  if(l+1<r)
  {
      int m=(l+r)/2;
      MergeSort(l,m);
      MergeSort(m,r);
      Merge(l,m,r);
  }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int l,r,m;
    l=0;
    r=n;
    flag=0;
    MergeSort(l,r);
    for(int i=0;i<n;i++)
        printf("%d%c",a[i],i==n-1?'\n':' ');
    printf("%d\n",flag);
    return 0;
}