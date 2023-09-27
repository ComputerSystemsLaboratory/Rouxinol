#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;cin>>n>>k;
    ll arr[n];for(int i=0;i<n;i++) cin>>arr[i];
    //ll dp[n]; dp[0]=arr[0];
    //for(int i=1;i<k;i++) dp[i]=arr[i]*dp[i-1];
    //ll curr=dp[k-1];
  //for(int i=0;i<n;i++) cout<<dp[i]<<" "<<endl;
    for(int i=k;i<n;i++)
    {
      if(arr[i]>arr[i-k]) cout<<"Yes\n";
      else cout<<"No\n";
    }
}