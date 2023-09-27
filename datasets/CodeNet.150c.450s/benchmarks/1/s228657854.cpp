#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
#define INF 1020304050

int main()
{
  int n;cin>>n;
  vector<int> a(n);
  int i;
  rep(i,n)cin>>a[i];
  vector<int> lans(n,INF);
  rep(i,n)
  {
    int ind=lower_bound(all(lans),a[i])-lans.begin();
    lans[ind]=a[i];
  }
  int ans=0;
  rep(i,n)
  {
    if(lans[i]!=INF)ans++;
    else break;
  }
  cout<<ans<<endl;
}

