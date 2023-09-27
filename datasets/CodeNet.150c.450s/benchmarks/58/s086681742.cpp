#include "bits/stdc++.h"
using namespace std;

#define FOR( i, m, n )	for( int (i) = (m); (i) < (n); i++ )
#define REP( i, n )		FOR( i, 0, n )
#define ALL( x )		(x).begin(), (x).end()

int main() {
	stack<int> s;
	int x, y;
	string str;
	
	while( 1 ) {
		cin >> str;
		if( cin.eof() ) break;
		if( str == "+" ) {
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			s.push( x + y );
		} else if( str == "-" ) {
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			s.push( y - x );
		} else if( str == "*" ) {
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			s.push( x * y );
		} else {
			s.push( stoi( str ) );
		}

	}

	cout << s.top() << endl;
}
