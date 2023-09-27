#include <stdio.h>
#define MAX_N (10010)
#define MAX_Q (510)

int S[MAX_N];

bool linearSearch( int A[], int n, int key );


int main()
{
    int n, q;
    int ans = 0;

    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &S[i]);
    }

    scanf("%d", &q);
    for ( int i = 0; i < q; i++ ) {
	int t;
	scanf("%d", &t);
	if ( linearSearch( S, n, t ) ) {
	    ans++;
	}
    }

    printf("%d\n", ans);
    
    return 0;
}


bool linearSearch( int A[], int n, int key )
{
    int i = 0;
    A[n] = key;
    while ( A[i] != key ) {
	i++;
    } 
    return (i != n);
}