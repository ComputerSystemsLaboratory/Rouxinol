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

  int n, a, b, c, x;
  while(cin >> n >> a >> b >> c >> x){
    if( n == 0 ) break;
    vector<int> y(n);
    for(int i=0; i<n; i++) cin >> y[i];

    int p = 0;
    bool f = false;
    for(int i=0; i<=10000; i++){
      if( x == y[p] ) p++;
      if( p >= n ){
        cout << i << endl;
        // return 0;
        f = true;
        break;
      }
      if( f ) break;
      x = (a * x + b) % c;
    }
    if( !f ) cout << -1 << endl;

  }


  return 0;
}










//