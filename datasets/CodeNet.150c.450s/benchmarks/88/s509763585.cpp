#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  vector< pair< long long int, pair< long long int, long long int > > > list;

  for ( long long int i = 1; i <= 150; i++ ) {
    for ( long long int j = i+1; j <= 150; j++ ) {
      list.push_back( make_pair( i * i + j * j, make_pair( i, j ) ) );
    }
  }

  sort( list.begin(), list.end() );

  long long int w, h;

  while( true ) {

    cin >> h >> w;
    if ( w == 0 ) break;

    for ( long long int i = 0; i < list.size(); i++ ) {

      if ( w * w + h * h > list[i].first ) continue;
      if ( w * w + h * h < list[i].first ) {
	cout << list[i].second.first << " " << list[i].second.second << endl;
	break;
      }else {
	if ( h < list[i].second.first ) {
	  cout << list[i].second.first << " " << list[i].second.second << endl;
	  break;
	}
      }

    }

  }

  return 0;

}