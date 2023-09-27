#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long LL;
#define INF 2e9
const int maxn=200000+10;
int n;
int a[maxn];
int L[maxn/2+2],R[maxn/2+2];
LL merge(int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++) L[i]=a[left+i];
    for(int i=0;i<n2;i++) R[i]=a[mid+i];
    L[n1]=INF,R[n2]=INF;
    int i=0,j=0;
    LL cnt=0;
    for(int k=left;k<right;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i++];

        }
        else
        {
            a[k]=R[j++];
            cnt+=n1-i;
        }
    }
    return cnt;



}
LL merge_sort(int left,int right)
{
    if(right-left>1)
    {
        int mid=(left+right)/2;
        LL n1=merge_sort(left,mid);
        LL n2=merge_sort(mid,right);
        LL n3=merge(left,mid,right);
        return n1+n2+n3;
    }
    return 0;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    cout<<merge_sort(0,n)<<endl;


    return 0;
}