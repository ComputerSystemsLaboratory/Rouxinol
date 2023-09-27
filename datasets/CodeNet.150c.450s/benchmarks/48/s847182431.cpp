#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  while(1){
    int e;
    cin >> e;
    if(e == 0) break;
    int ans = e + 1;
    for(int y = 0; y*y <= e; y++)
      for(int z = 0; z*z*z <= e; z++)
        if(y*y+z*z*z <= e)
          ans = min(ans,e-y*y-z*z*z+y+z);
    cout << ans << endl;
  }
}