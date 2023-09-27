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
  while( cin >> n ){
    if( n == 0 ) break;
    vector< vector<bool> > b(21, vector<bool>(21, false));
    for(int i=0; i<n; i++){
      int x, y;
      cin >> x >> y;
      b[y][x] = true;
    }
    int m;
    cin >> m;
    int px = 10;
    int py = 10;
    for(int i=0; i<m; i++){
      char d;
      int l;
      cin >> d >> l;
      while( l > 0 ){
        if( d == 'N' ) py++;
        if( d == 'S' ) py--;
        if( d == 'E' ) px++;
        if( d == 'W' ) px--;

        if( b[py][px] ){
          n--;
          b[py][px] = false;
        }
        l--;
      }
    }
    cout << ( n == 0 ? "Yes" : "No" ) << endl;

  }

  return 0;
}








// EOF