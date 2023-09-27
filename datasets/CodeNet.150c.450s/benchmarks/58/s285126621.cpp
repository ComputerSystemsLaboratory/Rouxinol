#include "bits/stdc++.h"
using namespace std;

#define FOR( i, m, n )	for( int (i) = (m); (i) < (n); i++ )
#define REP( i, n )		FOR( i, 0, n )
#define ALL( x )		(x).begin(), (x).end()

int main() {
	stack<int> st;

	char s[100];
	int a, b;
	while( scanf( "%s", &s ) != EOF ) {
		if( s[0] == '+' ) {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push( a + b );
		} else if( s[0] == '-' ) {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push( b - a );
		} else if( s[0] == '*' ) {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push( a * b );
		} else {
			st.push( atoi( s ) );
		}
	}

	printf( "%d\n", st.top() );
}
