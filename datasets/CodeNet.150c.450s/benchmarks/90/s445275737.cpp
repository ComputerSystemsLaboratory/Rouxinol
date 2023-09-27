#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main( void )
{
  int d,n=0;
  map<int,int> m;
  while( 1 ){
    cin>>d;
    if( cin.eof() ) break;
    if( m.find( d ) == m.end() ) m[d]=0;
    m[d]++;
  }
  for( map<int,int>::iterator it = m.begin(); it != m.end(); ++it )
    if( it->second > n ) n = it->second;
  for( map<int,int>::iterator it = m.begin(); it != m.end(); ++it )
    if( it->second == n ) cout << it->first << endl;
  return 0;
}