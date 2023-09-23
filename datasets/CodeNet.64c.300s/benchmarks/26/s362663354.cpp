#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
#define MOD 1000000007

int main()
{
  int m,n;cin>>m>>n;
  int left=n;
  ll ans=1;
  ll ks=m;
  while(left>0)
  {
    if(left%2==1)
    {
      ans=(ans*ks)%MOD;
    }
    ks=(ks*ks)%MOD;
    left/=2;
  }
  cout<<ans<<endl;
}

