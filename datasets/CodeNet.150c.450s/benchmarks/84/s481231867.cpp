#include<iostream>

using namespace std;

typedef long long ll;

const long maxn=200005;
const ll maxv=1e9+5;

long sum=0;

void Merge(ll*a,long left,long mid,long right)
{
    long n1=mid-left,n2=right-mid;
    ll *L,*R;
    L=new ll [n1+1];R=new ll [n2+1];
    for(long i=0;i<n1;i++)
        L[i]=a[left+i];
    for(long j=0;j<n2;j++)
        R[j]=a[mid+j];
    L[n1]=R[n2]=maxv;
    long m=0,n=0;
    for(long i=left;i<right;i++)
    {
        if(L[m]<=R[n]){a[i]=L[m];m++;}
        else
        {
            sum+=n1-m;
            a[i]=R[n];
            n++;
        }
    }
}

void Merge_Sort(ll*a,long left,long right)
{
    if(left<right-1)
    {
        long mid=(left+right)/2;
        Merge_Sort(a,left,mid);
        Merge_Sort(a,mid,right);
        Merge(a,left,mid,right);
    }
}


int main()
{
    long n;
    ll a[maxn];
    cin>>n;
    for(long i=0;i<n;i++)
        cin>>a[i];
    Merge_Sort(a,0,n);
    cout<<sum<<endl;
    return 0;
}