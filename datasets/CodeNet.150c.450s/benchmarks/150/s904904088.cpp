#include <stdio.h>

using namespace std;

#define MAX 2000005
#define INF 10001

int ary_a[MAX];
int ary_b[MAX];

void CountingSort( int ary_size ) {
	int ary_c[INF] = {0};
	int i = 0, j = 0;

	for ( j = 1 ; j <= ary_size ; j++ ) {
		//数値の出現回数を記録する
		ary_c[ary_a[j]]++;
	}

	for ( i = 1 ; i < INF ; i++ ) {
		// i以下の数値の出現回数を記録していく[
		ary_c[i] = ary_c[i] + ary_c[i-1];
	}

	for ( j = 1 ; j <= ary_size ; j++ ) {
		ary_b[ary_c[ary_a[j]]] = ary_a[j];
		ary_c[ary_a[j]]--;
	}
}

int main() {
	int number = 0;
	scanf( "%d", &number );

	for ( int i = 0 ; i < number ; i++ ) {
		scanf( " %d", &ary_a[i+1] );
	}

	CountingSort( number );

	for ( int i = 1 ; i <= number ; i++ ) {
		if ( i > 1 ) { fprintf( stdout, " " ); }
		fprintf( stdout, "%d", ary_b[i] );
	}
	fprintf( stdout, "\n" );
	return 0;
}

