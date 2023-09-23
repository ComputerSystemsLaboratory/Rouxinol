#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
using namespace std;


int main(){

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    int l = 1;
    int r = 1;

    int sum = 0;
    int cnt = 0;
    while(true){
      if( r >= n ) break;

      while( sum > n ){
        sum -= l;
        l++;
        if( sum == n ) cnt++;
      }

      sum += r;
      r++;
      if( sum == n ) cnt++;
      // cerr << sum << " " << l << " " << r << endl;
    }
    cout << cnt << endl;
  }


  return 0;
}








// EOF