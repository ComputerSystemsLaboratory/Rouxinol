#include <iostream>
#include <string>
#include <map>
using namespace std;
int main( void )
{
  string s,t;
  int n=0;
  map<string,int> m;
  while( 1 ){
    cin>>s;
    if( cin.eof() ) break;
    if( m.find( s ) == m.end() ) m[s]=0;
    m[s]++;
    if( s.size() > n ){ t = s; n = s.size(); }
  }
  n=0;
  for( map<string,int>::iterator it = m.begin(); it != m.end(); ++it )
    if( it->second > n ) n = it->second;
  for( map<string,int>::iterator it = m.begin(); it != m.end(); ++it )
    if( it->second == n ) cout << it->first;
  cout << ' ' << t << endl;
  return 0;
}