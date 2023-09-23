#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  int e;
  while(cin >> e){
    if( e == 0 ) break;
    int ans = 10000000;
    for(int z=0; z*z*z<=e; z++){
      for(int y=0; z*z*z+y*y<=e; y++){
        int x = e - z*z*z - y*y;
        if( x >= 0 ){
          ans = min(ans, x + y + z);
        }
      }
    }
    cout << ans << endl;

  }

  return 0;
}

// EOF