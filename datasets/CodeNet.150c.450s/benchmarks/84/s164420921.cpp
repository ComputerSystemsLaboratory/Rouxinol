#include<iostream>
using namespace std;
int a[200005],tmp[200005],n;
long long ans;
long long merge(int a[],int l,int m,int r,int tmp[])
{
    int p1=l,p2=m+1,p3=0;
    long long cnt=0;
    while(p1<=m&&p2<=r)
    {
        if(a[p1]<=a[p2]) tmp[p3++]=a[p1++];
        else {tmp[p3++]=a[p2++];cnt+=m-p1+1;}
    }
    while(p1<=m) tmp[p3++]=a[p1++];
    while(p2<=r) tmp[p3++]=a[p2++];
    for(int i=0;i<=r-l;i++) a[i+l]=tmp[i];
    return cnt;
}
long long mergesort(int a[],int l,int r,int tmp[])
{
    long long v1,v2,v3;
    if(l<r)
    {
        int m=l+(r-l)/2;
        v1=mergesort(a,l,m,tmp);
        v2=mergesort(a,m+1,r,tmp);
        v3=merge(a,l,m,r,tmp);
        return v1+v2+v3;
    }
    return 0;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    ans=mergesort(a,0,n-1,tmp);
    cout<<ans<<endl;
    return 0;
}
