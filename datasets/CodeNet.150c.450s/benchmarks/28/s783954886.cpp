#include<iostream>
using namespace std;
long long a[100005],maxn;
int n,k;
int check(long long p)
{
    int i=0;
    for(int j=1;j<=k;j++)
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
    while(left<right-1)
    {
        mid=left+(right-left)/2;
        if(check(mid)>=n) right=mid;
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
    cout<<solve()<<endl;
    return 0;
}
