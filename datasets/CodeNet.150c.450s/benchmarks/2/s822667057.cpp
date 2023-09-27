#include <stdio.h>

using namespace std;
#define MAX 100000

int partition( int * ary, int p, int r ) {
	int x = ary[r];
	int i = p-1; 
	int j;
	int tmp = 0;

	for ( j = p ; j < r ; j++ ) {
		if ( ary[j] <= x ) {
			i++;
			tmp = ary[j];
			ary[j] = ary[i];
			ary[i] = tmp;
		}
	}
	tmp = ary[i+1];
	ary[i+1] = ary[r];
	ary[r] = tmp;
	return i+1;
}


int main() {
	int number = 0;
	int ary[MAX] = {0};
	int sep = 0;
	scanf( "%d", &number );

	for ( int i = 0 ; i < number ; i++ ) {
		scanf( " %d", &ary[i] );	
	}

	sep = partition( ary, 0, number-1 );
	for ( int i = 0 ; i < number ; i++ ) {
		if ( i ) {
			fprintf( stdout, " " );
		} 

		if ( sep == i ) {
			fprintf( stdout, "[%d]", ary[i] );
		} else {
			fprintf( stdout, "%d", ary[i] );
		}
	}
	fprintf( stdout, "\n" );
	return 0;
}

