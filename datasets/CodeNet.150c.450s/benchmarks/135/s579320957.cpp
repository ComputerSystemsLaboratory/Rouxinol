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
  while(n!=0&&m!=0)
  {
    ll ans=0;
    vector<int> h(n);
    vector<int> w(m);
    int i,j;
    rep(i,n)cin>>h[i];
    rep(i,m)cin>>w[i];
    vector<int> hsum(n+1,0);
    vector<int> wsum(m+1,0);
    rep(i,n)hsum[i+1]=h[i]+hsum[i];
    rep(i,m)wsum[i+1]=w[i]+wsum[i];
    vector<int> hcount(1500001,0);
    vector<int> wcount(1500001,0);
    rep(i,n)for(j=i+1;j<=n;j++)
    {
      hcount[hsum[j]-hsum[i]]++;
    }
    rep(i,m)for(j=i+1;j<=m;j++)
    {
      wcount[wsum[j]-wsum[i]]++;
    }
    rep(i,1500001)ans+=hcount[i]*wcount[i];
    cout<<ans<<endl;
    cin>>n>>m;
  }
}

