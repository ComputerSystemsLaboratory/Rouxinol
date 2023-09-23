#include<bits/stdc++.h>
using namespace std;

int calc_mille( int y, int m, int d )
{
  int day = 0;
  for(int i=1; i<y; i++) {
    if( i % 3 == 0 ) day += 200;
    else day += 195;
  }
  if( y % 3 == 0 ) {
    day += (m-1) * 20 + d;
  } else {
    for(int i=1; i<m; i++) {
      if( i % 2 ) day += 20;
      else day += 19;
    }
    day += d;
  }

  return day;
}

int main()
{
  int mille = calc_mille( 1000, 1, 1 );
  int n;
  cin >> n;
  while( n-- ) {
    int Y, M, D;
    cin >> Y >> M >> D;
    cout << mille - calc_mille( Y, M, D ) << endl;
  }
}