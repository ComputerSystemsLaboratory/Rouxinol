#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int s[n];
  for(int i=0;i<n;i++) cin>>s[i];
  int q;
  cin>>q;
  int t[q];
  for(int i=0;i<q;i++) cin>>t[i];
  int ans=0;
  int used[q];
  memset(used,0,sizeof(used));
  for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
      if(used[j]) continue;
      if(s[i]==t[j]){
	ans++;
	used[j]=1;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}