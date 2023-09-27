#include <stdio.h>
#include <string.h>

#define MAX_N (2000010)

int k;
int S[MAX_N];
int num;

void swap( int i, int j ) {
    int tmp = S[i];
    S[i] = S[j];
    S[j] = tmp;
}

void insert( int v ) {
    int cur, parent;
    num++;
    S[num] = v;

    cur = num;
    parent = ( cur >> 1 );

    while ( parent > 0 ) {
	if ( S[parent] < S[cur] ) {
	    swap( parent, cur );
	    cur = parent;
	    parent = (cur >> 1);
	}
	else break;
    }
}

void maxHeapify( int i )
{
    int l = (i<<1);
    int r = (l + 1);
    int max_i = i;
    int max_v = S[i];
    if ( l <= num && max_v < S[l] ) {
	max_i = l;
	max_v = S[l];
    }
    if ( r <= num && max_v < S[r] ) {
	max_i = r;
	max_v = S[r];
    }
    
    if ( max_i != i ) {
	swap( i, max_i );
	maxHeapify( max_i );
    }

    return;
}

int extractMax()
{
    int max_v = S[1];
    S[1] = -1;

    maxHeapify( 1 );

    return max_v;
}

int main()
{
    char str[40];
    
    while ( true ) {
	scanf("%s", str);
	if ( !strcmp( str, "end" ) ) break;
	if ( !strcmp( str, "insert" ) ) {	// insert
	    int v;
	    scanf("%d", &v);
	    insert( v );
	}
	else {			// extract
	    int max_v = extractMax();
	    printf("%d\n", max_v);
	}
    }
    
    return 0;
}