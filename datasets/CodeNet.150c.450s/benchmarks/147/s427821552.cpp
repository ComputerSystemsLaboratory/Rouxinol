#include <bits/stdc++.h>
using namespace std; 
#define int int64_t
#define itn int
#define fi first
#define se second 
signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,ans;
  map<int,int> d;
  cin>>n;
  for(int i=1;i<=sqrt(n);i++){
    for(int j=1;j<=sqrt(n);j++){
      for(int k=1;k<=sqrt(n);k++){
	d[pow(i,2)+pow(j,2)+pow(k,2)+(i*j)+(i*k)+(j*k)]++;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<d[i]<<"\n";
  }
}
