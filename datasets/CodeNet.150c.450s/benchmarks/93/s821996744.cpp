#include <stdio.h>

using namespace std;

#define MAX 100000
#define INF 1000000000

typedef struct _card {
	int number;
	char symbol;
} card_t;

card_t ary_a[MAX];
card_t ary_b[MAX];
card_t ary_bl[MAX/2];
card_t ary_br[MAX/2];

int partition( int p, int r ) {
	int i = p-1;
	int x = ary_a[r].number;
	card_t tmp;

	for ( int j = p ; j < r ; j++ ) {
		if ( ary_a[j].number <= x ) {
			i++;
			tmp = ary_a[j];
			ary_a[j] = ary_a[i];
			ary_a[i] = tmp;
		}
	}

	tmp = ary_a[r];
	ary_a[r] = ary_a[i+1];
	ary_a[i+1] = tmp;

	return i+1;
}

void quicksort( int p, int r ) {
	int q;
	if ( p < r ) {
		q = partition( p, r );
		quicksort( p, q-1 ); 
		quicksort( q, r );
	}
}

void merge( int left, int mid, int right ) {
	int n1 = mid - left;
	int n2 = right - mid;

	for ( int i = 0 ; i < n1 ; i++ ) {
		ary_bl[i] = ary_b[left+i];
	}

	for ( int i = 0 ; i < n2 ; i++ ) {
		ary_br[i] = ary_b[mid+i];
	}

	ary_bl[n1].number = INF;
	ary_br[n2].number = INF;

	int i = 0, j = 0;
	card_t tmp;
	for ( int k = left ; k < right ; k++ ) {
		if ( ary_bl[i].number <=  ary_br[j].number ) {
			ary_b[k] = ary_bl[i];
			i++;
		} else {
			ary_b[k] = ary_br[j];
			j++;
		}
	}
}

void mergesort( int left, int right ) {
	if ( left+1 < right ) {
		int mid = ( left + right ) / 2;
		mergesort( left, mid );
		mergesort( mid, right );
		merge( left, mid, right );
	}
}

int main() {
	int number;
	int stable = 1;
	scanf( "%d", &number );

	for ( int i = 0 ; i < number ; i++ ) {
		scanf( " %c %d", &ary_a[i].symbol, &ary_a[i].number );
		ary_b[i].symbol = ary_a[i].symbol;
		ary_b[i].number = ary_a[i].number;
	}

	quicksort( 0, number-1 );
	mergesort( 0, number );

	for ( int i = 0 ; i < number ; i++ ) {
		if ( ary_a[i].symbol != ary_b[i].symbol ) {
			stable = 0;
			break;
		}
	}
	if ( stable ) {
		fprintf( stdout, "Stable\n" );
	} else {
		fprintf( stdout, "Not stable\n" );
	}

	for ( int i = 0 ; i < number ; i++ ) {
		fprintf( stdout, "%c %d\n", ary_a[i].symbol, ary_a[i].number );
	}
	return 0;
}

