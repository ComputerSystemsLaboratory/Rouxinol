#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n;
  cin>>n;
  int a=0;
  int b=0;
  for(int i=0;i<n;i++){
    string s,t;
    cin>>s>>t;
    if(s>t)a+=3;
    if(s<t)b+=3;
    if(s==t)a++,b++;
  }
  cout<<a<<" "<<b<<endl;
}

