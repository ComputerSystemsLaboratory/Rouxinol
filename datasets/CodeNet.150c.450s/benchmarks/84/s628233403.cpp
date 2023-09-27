#include<iostream>
using namespace std;
#define maxn 200005
#define sentinel 2000000000
typedef long long LL;
int L[maxn/2],R[maxn/2];
int a[maxn];
LL _merge(int left,int mid,int right)
{
    LL cnt=0;
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;++i) L[i]=a[left+i];
    for(int i=0;i<n2;++i) R[i]=a[mid+i];
    L[n1]=R[n2]=sentinel;
    int i=0,j=0;
    for(int k=left;k<right;++k)
    {
        if(L[i]<=R[j])
            a[k]=L[i++];
        else
        {
            a[k]=R[j++];
            cnt+=n1-i;
        }
    }
    return cnt;
}
LL mergesort(int left,int right)
{
    int mid;
    LL v1,v2,v3;
    if(left+1<right)
    {
        mid=(left+right)>>1;
        v1=mergesort(left,mid);
        v2=mergesort(mid,right);
        v3=_merge(left,mid,right);
        return v1+v2+v3;
    }
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    LL ans=mergesort(0,n);
    cout<<ans<<endl;
    return 0;
}