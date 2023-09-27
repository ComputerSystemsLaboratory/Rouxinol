#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>
#include <algorithm>

using namespace std;
const static int L_MAX = 7;

string rmn_toString( int n, int l ) {
  ostringstream oss;
  oss << n;
  string s = oss.str();
  for( int i = s.size(); i < l; i++ ) {
    s = "0" + s; 
  }
  return s;
}

int rmn_parseInt( string s ) {
  int len = s.size();
  int i;
  for( i = 0; i < len; i++ ) {
    if( s[ i ] != 0 ) { break; }
  }
  if( i == len ) { return 0; }

  int r;
  sscanf( s.substr( i ).c_str(), "%d", &r );

  return r;
}

int main() {
  while( 1 ) {
    int ai, l;
    int i = 0, j;
    map<int, int> dict;
    cin >> ai >> l;
    if( !ai && !l ) { return EXIT_SUCCESS; }

    dict[ ai ] = i;
    while( 1 ) {
      string as;
      as = rmn_toString( ai, l );
      sort( as.begin(), as.end() );

      string asi = as;
      reverse( asi.begin(), asi.end() );

      ai = rmn_parseInt( asi ) - rmn_parseInt( as );
      i++;
      if( dict.find( ai ) != dict.end() ) { break; }
      dict[ ai ] = i; 
    }
    
    cout << dict[ ai ] << " " << ai << " " << ( i - dict[ ai ] ) << endl;
  }
}