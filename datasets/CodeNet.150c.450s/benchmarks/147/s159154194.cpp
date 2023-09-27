#include <bits/stdc++.h>

using namespace std;

#define int long long


const int INF = 1e9+7;

int n,x,y,z,i;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin>>n;
  int m = sqrt(10+n);
  vector<int> out(n+1,0);
  int ctr = 0;
  for(x=1;x<m+1;x++){
    for(y=1;y<m+1;y++){
      for(z=1;z<m+1;z++){
        if(x*x + y*y + z*z +x*y+y*z+z*x <= n){
          out[x*x + y*y + z*z +x*y+y*z+z*x]++;
        }
      }
    }
  }
  
  for(i=1;i<=n;i++)
    cout<<out[i]<<"\n";
}
