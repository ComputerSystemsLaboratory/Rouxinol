#include <bits/stdc++.h>

using namespace std;

int main()
{
  int e;
  while(cin >> e, e){
    int ans = 1 << 30;
    for(int z = 0; z * z * z <= e; z++){
      int y = floor(sqrt(e - z*z*z));
      ans = min(ans, e - y*y - z*z*z + y + z);
    }
    cout << ans << endl;
  }
  return 0;
}