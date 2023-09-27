#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  string s;
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    if(s[i]>='a'&&s[i]<='z')s[i]-='a'-'A';
    else if(s[i]>='A'&&s[i]<='Z')s[i]+='a'-'A';
  }
  cout<<s<<endl;
}

