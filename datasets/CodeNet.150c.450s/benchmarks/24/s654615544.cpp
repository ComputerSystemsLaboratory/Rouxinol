#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

signed main(){
  while(true){
    int n,m;
    cin>>n>>m;
    if(!n&&!m)break;
    vector<pair<int,int> > a(n);
    for(int i=0;i<n;i++){
      cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(),a.end(),greater<pair<int,int> >());
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
      sum+=a[i].second;
      if(sum-a[i].second<=m&&sum>m){
        ans+=(sum-m)*a[i].first;
      }else if(sum>m)ans+=a[i].first*a[i].second;
    }
    cout<<ans<<endl;
  }
}

