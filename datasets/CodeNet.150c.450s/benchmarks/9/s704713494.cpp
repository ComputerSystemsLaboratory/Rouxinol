#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  while(true){
    string s;
    cin>>s;
    if(s=="-")break;
    int n;
    cin>>n;
    int a=0;
    for(int i=0;i<n;i++){
      int b;
      cin>>b;
      a+=b;
    }
    a%=s.size();
    for(int i=0;i<s.size();i++){
      cout<<s[(a+i)%s.size()];
    }
    cout<<endl;
  }
}

