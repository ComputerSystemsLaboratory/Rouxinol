#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  int test[n];
  for(int i=0; i<n; i++) cin>>test[i];

  for(int i=0; i<n-k; i++) {
    if(test[i]<test[i+k]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }

  return 0;
}