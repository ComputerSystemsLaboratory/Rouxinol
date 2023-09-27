#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn=500005;
const int INF=0x3f3f3f3f;
int n;
int a[maxn];
int cnt=0;
void Sort (int left,int mid,int right)
{
    int L[(maxn>>1)+10],R[(maxn>>1)+10];
    int numl=mid-left;
    int numr=right-mid;
    for (int i=0;i<numl;i++)
        L[i]=a[i+left];
    for (int i=0;i<numr;i++)
        R[i]=a[i+mid];
    L[numl]=R[numr]=INF;
    for (int i=left,j=0,k=0;i<right;i++)
    {
        cnt++;
        L[j]<R[k]?a[i]=L[j++]:a[i]=R[k++];
    }
}
void Merge (int left,int right)
{
    if(left+1<right)
    {
        int mid=(left+right)>>1;
        Merge (left,mid);
        Merge (mid,right);
        Sort (left,mid,right);
    }
}
int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    Merge (0,n);
    for (int i=0;i<n;i++)
        printf("%d%c",a[i],i==n-1?'\n':' ');
    printf("%d\n",cnt);
    return 0;
}

