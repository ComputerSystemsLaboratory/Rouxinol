#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  string s;
  map<char,int> mp;
  
  while(getline(cin,s)){
    for(int i=0;i<s.size();i++)mp[s[i]]++;
  }
  for(int i=0;i<26;i++){
    int x='a'+i;
    putchar(x);
    cout<<" : "<<mp['a'+i]+mp['A'+i]<<endl;
  }
}

