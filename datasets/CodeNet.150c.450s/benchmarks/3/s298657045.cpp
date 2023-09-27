#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  string s;
  cin>>s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string t;
    cin>>t;
    int a,b;
    cin>>a>>b;
    if(t=="reverse")reverse(s.begin()+a,s.begin()+b+1);
    if(t=="replace"){
      string p;
      cin>>p;
      for(int j=a;j<=b;j++)s[j]=p[j-a];
    }
    if(t=="print"){
      for(int j=a;j<=b;j++)cout<<s[j];
      cout<<endl;
    }
  }
}

