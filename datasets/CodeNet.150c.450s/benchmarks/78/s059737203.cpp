#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000001

long long int flag[MAX] = {};
long long int flag2[MAX] = {};

int main() {

	vector< long long int > l, l2;

	for( long long int i = 1; ; i++ ) {

		long long int a = i * ( i + 1 ) * ( i + 2 ) / 6;

		if ( a >= MAX ) break;

		l.push_back( a );
		if ( ( a % 2 ) != 0 ) l2.push_back( a );

	}
	
	for ( long long int i = 1; i < MAX; i++ ) {
		flag[i] = MAX + 1;
		flag2[i] = MAX + 1;
	}

	for ( long long int i = 0; i < l.size(); i++ ) {
		for ( long long int j = 0; j + l[i] < MAX; j++ ) {
			flag[ j + l[i] ] = min( flag[ j + l[i] ], flag[ j ] + 1 );
		}
	}
	for ( long long int i = 0; i < l2.size(); i++ ) {
		for ( long long int j = 0; j + l2[i] < MAX; j++ ) {
			flag2[ j + l2[i] ] = min( flag2[ j + l2[i] ], flag2[ j ] + 1 );
		}
	}

	while( true ) {

		long long int in;
		cin >> in;
		if ( in == 0 ) break;

		cout << flag[in] << " " << flag2[in] << endl;

	}

	return 0;

}