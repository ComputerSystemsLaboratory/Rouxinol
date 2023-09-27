#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <set>
#include <map>
#define sf scanf
#define pf printf
#define show(x) cout<<"x:"<<x<<endl;
using namespace std;
typedef long long ll;
const int maxn=5e5+5;
const ll infll=2000000000;

int l[maxn/2],r[maxn/2];

ll merg(int a[],int left,int right)
{
    int mid=(left+right)/2;
    int n1=mid-left,n2=right-mid;
    l[n1]=r[n2]=infll;
    for(int i=0;i<n1;i++)l[i]=a[left+i];
    for(int i=0;i<n2;i++)r[i]=a[mid+i];
    int i=0,j=0;
    ll cnt=0;
    for(int k=left;k<right;k++)
    {
        if(l[i]>r[j])
        {
            cnt+=n1-i;
            a[k]=r[j++];
        }
        else a[k]=l[i++];
    }

    return cnt;
}

ll mergesort(int a[],int left,int right)
{
    ll v=0;
    if(left+1<right)
    {
        int mid=(left+right)/2;
        v+=mergesort(a,left,mid);
        v+=mergesort(a,mid,right);
        v+=merg(a,left,right);

    }
    return v;
}

int main()
{
    int a[maxn],n;
    sf("%d",&n);
    for(int i=0;i<n;i++)
        sf("%d",&a[i]);
    ll ans=mergesort(a,0,n);
    pf("%lld\n",ans);
    return 0;
}

