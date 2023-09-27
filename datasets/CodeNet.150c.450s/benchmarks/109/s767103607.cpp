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
  while(n!=0)
  {
    vector<int> times(n,0);
    vector<int> timesto(n,0);
    int i;
    rep(i,n)
    {
      string hms;cin>>hms;
      string h=hms.substr(0,2);
      string m=hms.substr(3,2);
      string s=hms.substr(6,2);
      int th=atoi(h.c_str());
      int tm=atoi(m.c_str());
      int ts=atoi(s.c_str());
      times[i]=th*3600+tm*60+ts;
      cin>>hms;
      h=hms.substr(0,2);
      m=hms.substr(3,2);
      s=hms.substr(6,2);
      th=atoi(h.c_str());
      tm=atoi(m.c_str());
      ts=atoi(s.c_str());
      timesto[i]=th*3600+tm*60+ts;
    }
    vector<int> sum(86401,0);
    rep(i,n)
    {
      sum[times[i]]++;
      sum[timesto[i]]--;
    }
    rep(i,86400)
    {
      sum[i+1]+=sum[i];
    }
    int ans=0;
    rep(i,86401)
    {
      ans=max(ans,sum[i]);
    }
    cout<<ans<<endl;
    cin>>n;
  }
}


