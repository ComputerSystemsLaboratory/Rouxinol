#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  vector<int> a(n);
  map<int,int> mp;
  ll sum =0 ;
  for(int i=0;i<n;i++)
  {
      cin >> a[i];
      mp[a[i]]++;
      sum += a[i];
  }
  ll q;
  cin >> q;
  for(int i=0;i<q;i++)
  {
       ll x,y;
       cin >> x >> y;
       mp[y] += mp[x];
       sum += mp[x]*(y-x);
       mp[x]=0; cout << sum << endl;
  }

}
