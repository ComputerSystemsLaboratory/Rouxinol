#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  string s,t;
  cin>>s>>t;
  for(int i=0;i<s.size();i++){
    bool f=true;
    for(int j=0;j<t.size();j++){
      if(s[(i+j)%s.size()]!=t[j])f=false;
    }
    if(f){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
}

