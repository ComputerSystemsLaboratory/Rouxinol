#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

signed main(){
  while(true){
    int n;
    cin>>n;
    if(!n)break;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=1e9;
    for(int i=0;i<n-1;i++){
      ans=min(ans,abs(a[i]-a[i+1]));
    }
    cout<<ans<<endl;
  }
}

