#include<iostream>
using namespace std;
long long a[100005],k,n;
long long maxn;
int check(long long p)
{
    int i=0;
    for(int j=0;j<k;j++)
    {
        long long s=0;
        while(s+a[i]<=p)
        {
            s+=a[i];
            i++;
            if(i==n) return n;
        }
    }
    return i;
}
int solve()
{
    long long left=0,right=maxn,mid;
    while(right-left>1)
    {
        mid=left+(right-left)/2;
        int v=check(mid);
        if(v>=n) right=mid;
        else left=mid;
    }
    return right;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxn+=a[i];
    }
    int ans=solve();
    cout<<solve()<<endl;
    return 0;
}
