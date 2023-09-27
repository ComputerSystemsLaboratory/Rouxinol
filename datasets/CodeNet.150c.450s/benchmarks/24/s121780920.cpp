#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
int main(){
  while(1){
    ll n,m;
    cin>>n>>m;
    if(n==0&&m==0) return 0;
    vector<P> v;
    ll dsum=0;
    for(int i=0;i<n;i++){
      ll d,atk;
      cin>>d>>atk;
      dsum+=d;
      v.push_back(P(atk,d));
    }
    sort(v.begin(),v.end());
    m=dsum-m;
    if(m<=0){
      cout<<0<<endl;
      continue;
    }
    ll ps=0,ans=0;
    while(m>0){
      if(v[ps].second<=m){
        m-=v[ps].second;
        ans+=v[ps].first*v[ps].second;
        ps++;
        continue;
      }
      else{
        ans+=v[ps].first*m;
        break;
      }
    }
    cout<<ans<<endl;
  }
}

