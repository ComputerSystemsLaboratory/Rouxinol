#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

struct Section{
  int d;
  int p;
};

bool operator<( const Section& s1, const Section& s2 ){
  return s1.p < s2.p;
}

int main () {
  while ( 1 ){
    int n, m;

    cin >> n >> m;
    if( !n && !m ) { return EXIT_SUCCESS; }

    vector<Section> vs;

    for( int i = 0; i < n; i++ ) {
      Section s;
      cin >> s.d >> s.p;
      vs.push_back( s );
    }

    sort( vs.begin(), vs.end() );

    int rp = 0;
    for(
        vector<Section>::iterator it = vs.end() - 1;
        it != vs.begin() - 1;
        it--
       ){
      if( m >= it->d ){
        m -= it->d;
      }else{
        rp += ( it->p * ( it->d - m ) );
        m = 0;
      }
    }
    cout << rp << endl;
  }
}