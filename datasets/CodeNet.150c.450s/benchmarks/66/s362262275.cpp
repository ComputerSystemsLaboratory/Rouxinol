#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

signed main(){
  int n;
  cin>>n;
  map<string,int> mp;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    mp[s]++;
  }
  int m;
  cin>>m;
  bool f=true;
  for(int i=0;i<m;i++){
    string s;
    cin>>s;
    if(mp.count(s)){
      if(f){
        cout<<"Opened by "<<s<<endl;
        f=false;
      }else{
        cout<<"Closed by "<<s<<endl;
        f=true;
      }
    }else{
      cout<<"Unknown "<<s<<endl;
    }
  }
}

