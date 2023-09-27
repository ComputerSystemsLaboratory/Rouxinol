#include <bits/stdc++.h>
using namespace std;

int w[100005],n,k;

int judge(long long p)
{
    int j=0;
    for(int i=0;i < k;i++){
        long long s=0;
        while(s+w[j] <= p){s+=w[j];j++;if(j==n) return n;}
    }
    return j;
}

int solve()
{
    int l=0,r=2e9;
    while(l < r){
        int mid = (l+r)/2;
        if(judge(mid)==n) r=mid;
        else l=mid+1;
    }
    return r;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i < n;i++) cin>>w[i];
    cout<<solve()<<endl;

    return 0;
}

