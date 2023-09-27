#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> v(1000001,1 << 30);
  const int n = 400;
  for(int x = 0; x < n; x++){
    for(int y = 0; y < n; y++){
      for(int z = 0; z < n; z++){
        if(x + y*y + z*z*z > 1000001) continue;
        v[x + y*y + z*z*z] = min(v[x + y*y + z*z*z],x + y + z);
      }
    }
  }

while(1){
  int e; cin >> e;
  if(e == 0) break;

  cout << v[e] << endl;
}

  return 0;
}

