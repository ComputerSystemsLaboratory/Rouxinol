#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  string t;
  cin>>t;
  string s;
  int ans=0;
  while(cin>>s){
    if(s=="END_OF_TEXT")break;
    for(int i=0;i<s.size();i++){
      if(s[i]>='A'&&s[i]<='Z')s[i]-='A'-'a';
    }
    if(s==t)ans++;
  }
  cout<<ans<<endl;
}

