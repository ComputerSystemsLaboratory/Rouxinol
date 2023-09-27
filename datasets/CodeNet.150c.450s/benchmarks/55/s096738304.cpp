#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

int fx(string s){
  int ans=0;
  for(int i=0;i<s.size();i++)ans+=s[i]-'0';
  return ans;
}

signed main(){
  while(true){
    string s;
    cin>>s;
    if(s=="0")break;
    cout<<fx(s)<<endl;
  }
}

