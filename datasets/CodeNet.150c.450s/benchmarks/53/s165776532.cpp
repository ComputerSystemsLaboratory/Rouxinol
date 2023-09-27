#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
int main()
{
  int n;cin>>n;
  int m=n;
  int i;
  vector<int> ans(0);
  for(i=2;i*i<=m;i++)
  {
    while(n%i==0)
    {
      ans.emplace_back(i);
      n/=i;
    }
  }
  if(n>1)ans.emplace_back(n);
  cout<<m<<':';
  rep(i,ans.size())
  {
    cout<<' '<<ans[i];
  }
  cout<<endl;
}

