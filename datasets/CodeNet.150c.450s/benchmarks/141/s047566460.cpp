#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<vector>
#include<string>
#include<random>
using namespace std;


int main(){

  double x[4], y[4];
  while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){

    vector<bool> t(3, false);
    for(int i=0; i<3; i++){
      if( ( x[ i ] - x[ (i+1)%3 ] )*( y[ 3 ]-y[ (i+1)%3 ]) - ( y[ i ] - y[ (i+1)%3 ] )*( x[ 3 ] - x[ (i+1)%3 ] ) < 0 ) t[i] = true;
    }

    if( (t[0] && t[1] && t[2])||(!t[0] && !t[1] && !t[2]) ) cout << "YES" << endl;
    else cout << "NO" << endl;

  }

  return 0;
}














// EOF