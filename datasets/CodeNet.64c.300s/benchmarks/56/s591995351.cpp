#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<numeric>
#include<queue>
#include<string>
#include<sstream>

using namespace std;


int main(void) {

  int day[11] = {0, 20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
  int total = 195;

  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    int y, m, d;
    cin >> y >> m >> d;
    int ans = 0;
    while(true){
      if( y == 1000 && m == 1 && d == 1 ) break;

      d++;
      if( y % 3 == 0 ) d %= 20 + 1;
      else d %= day[ m ] + 1;

      if( d == 0 ){
        d++;
        m++;
        m %= 11;
        if( m == 0 ){
          m++;
          y++;
        }
      }
      ans++;
    }
    cout << ans << endl;
  }

  return 0;
}










//