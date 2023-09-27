#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n;
  cin>>n;
  vector<int> s(14,0);
  vector<int> h(14,0);
  vector<int> c(14,0);
  vector<int> d(14,0);
  for(int i=0;i<n;i++){
    char ca;
    int a;
    cin>>ca>>a;
    if(ca=='S')s[a]++;
    if(ca=='H')h[a]++;
    if(ca=='C')c[a]++;
    if(ca=='D')d[a]++;
  }
  for(int i=1;i<14;i++){
    if(!s[i])cout<<"S "<<i<<endl;
  }
  for(int i=1;i<14;i++){
    if(!h[i])cout<<"H "<<i<<endl;
  }
  for(int i=1;i<14;i++){
    if(!c[i])cout<<"C "<<i<<endl;
  }
  for(int i=1;i<14;i++){
    if(!d[i])cout<<"D "<<i<<endl;
  }
}

