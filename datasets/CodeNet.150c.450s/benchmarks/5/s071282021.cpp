#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=n-1;i>=0;i--){
    cout<<a[i];
    if(i)cout<<" ";
  }
  cout<<endl;
}

