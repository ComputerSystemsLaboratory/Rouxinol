#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
int main()
{
  int n,m;cin>>n>>m;
  while(n!=0||m!=0)
  {
    int i;
    vector<int> d(n);
    vector<int> p(n);
    rep(i,n)cin>>d[i]>>p[i];
    vector<pair<int,int>> dp(n);
    rep(i,n)dp[i]=make_pair(p[i],d[i]);
    sort(all(dp));
    reverse(all(dp));
    int now=0;
    while(m>0&&now<n)
    {
      if(m>=dp[now].second)
      {
        m-=dp[now].second;
        dp[now].second=0;
      }
      else if(m>0)
      {
        dp[now].second-=m;
        m=0;
      }
      now++;
    }
    if(m>0)cout<<0<<endl;
    else
    {
      ll ans=0;
      rep(i,n)ans+=dp[i].second*dp[i].first;
      cout<<ans<<endl;
    }
    cin>>n>>m;
  }
}


