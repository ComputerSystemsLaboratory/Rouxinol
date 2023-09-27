#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main( void )
{
  vector<int> v;
  for( int i=0; i<5; i++ ){
    int d;
    cin >> d;
    v.push_back( d );
  }
  sort( v.begin(), v.end() );
  cout << v[4] << ' ' << v[3] << ' ' << v[2] << ' ' << v[1] << ' ' << v[0] << endl;
  return 0;
}