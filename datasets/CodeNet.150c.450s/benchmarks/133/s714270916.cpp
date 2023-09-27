#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr ll mod=1e9+7;

int main()
{
  ll d;
  cin>>d;
  ll c[26];
  for (ll i = 0; i < 26; ++i)
  {
    cin>>c[i];
  }
  vector<vector<ll>> s(d,vector<ll>(26));
  for (ll i = 0; i < d; ++i)
  {
    for (ll j = 0; j < 26; ++j)
    {
      cin>>s[i][j];
    }
  }
  ll t;
  ll ans=0;
  vector<ll> last(26,-1);
  for (ll i = 0; i < d; ++i)
  {
    cin>>t;
    t--;
    ans+=s[i][t];
    last[t]=i;
    for (ll j = 0; j < 26; ++j)
    {
      ans-=c[j]*(i-last[j]);
    }
    cout<<ans<<endl;
  }
}
