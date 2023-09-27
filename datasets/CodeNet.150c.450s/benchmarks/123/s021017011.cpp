#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int ans=0;
  while(n--){
    int k;
    cin>>k;
    bool f=0;
    for(int i=2;i*i<=k;i++) f|=(k%i==0);
    if(!f) ans++;
  }
  cout<<ans<<endl;
  return 0;
}