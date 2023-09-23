#include <iostream>
#include <algorithm>
using namespace std;

const int LIMIT = 1000000000;

int main()
{
	int n;

	while( cin >> n && n ){
		int wf[ 10 ][ 10 ] = {0};
		for( int i = 0; i < 10; ++i ){
			for( int j = 0; j < 10; ++j ){
				if( i != j ) wf[ i ][ j ] = LIMIT;
			}
		}
		int m = 0;
		for( int i = 0; i < n; ++i ){
			int s, e, d;
			cin >> s >> e >> d;
			if( m < s ) m = s;
			if( m < e ) m = e;
			wf[ s ][ e ] = wf[ e ][ s ] = d;
		}
		m += 1;
		for( int k = 0; k < m; ++k ){
			for( int i = 0; i < m; ++i ){
				for( int j = 0; j < m; ++j ){
					wf[ i ][ j ] = min( wf[ i ][ j ], wf[ i ][ k ] + wf[ k ][ j ] );
				}
			}
		}
		int ansP = 0;
		int ansD = LIMIT;
		for( int i = 0; i < m; ++i ){
			int sum = 0;
			for( int j = 0; j < m; ++j ){
				sum += wf[ j ][ i ];
			}
			if( ansD > sum ){
				ansP = i;
				ansD = sum;
			}
		}
		cout << ansP << " " << ansD << endl;
	}


	return 0;
}