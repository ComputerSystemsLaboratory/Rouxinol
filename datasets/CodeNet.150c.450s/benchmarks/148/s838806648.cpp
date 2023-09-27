#include<bits/stdc++.h>
using namespace std;

int main( void )
{
  int N;
  cin >> N;
  string S;

  vector<int> C( 4 );

  for( int i = 0; i < N; i++ ) {
    cin >> S;
    if( S == "AC" )
      C.at( 0 )++;
    else if( S == "WA" )
      C.at( 1 )++;
    else if( S == "TLE" )
      C.at( 2 )++;
    else
      C.at( 3 )++;
  }

  cout << "AC x " << C.at( 0 ) << endl << "WA x " << C.at( 1 ) << endl << "TLE x " << C.at( 2 ) << endl << "RE x " << C.at( 3 ) << endl;

}