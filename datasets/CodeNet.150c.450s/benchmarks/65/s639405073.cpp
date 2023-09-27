#include <stdio.h>

#define MAX_N (50)

typedef struct{
    char suit;
    int value;
} Card;

Card Array1[MAX_N];
Card Array2[MAX_N];

static
void
BubbleSort( Card A[], int N )
{
    int i, j;
    for ( i = 0; i < N-1; i++ ) {
	for ( j = N-1; j > i; j-- ) {
	    if ( A[j-1].value > A[j].value ) {
		Card tmp = A[j-1];
		A[j-1] = A[j];
		A[j] = tmp;
	    }
	}
    }
}


static
void
SelectionSort( Card A[], int N )
{
    int i, j;
    for ( i = 0; i < N-1; i++ ) {
	int min_i = i;
	for ( j = i+1; j < N; j++ ) {
	    if ( A[min_i].value > A[j].value ) {
		min_i = j;
	    }
	}
	if ( min_i != i ) {
	    Card tmp = A[i];
	    A[i] = A[min_i];
	    A[min_i] = tmp;
	}
    }
}

static
void
printArray( Card A[], int N )
{
    int i;
    for ( i = 0; i < N; i++ ) {
	printf("%c%d%c", A[i].suit, A[i].value, (i == N-1) ? '\n' : ' ');
    }
}

static
bool
isStable( Card stable[], Card check[], int N )
{
    int i;
    for ( i = 0; i < N; i++ ) {
	if ( stable[i].value != check[i].value || stable[i].suit != check[i].suit ) {
	    return false;
	}
    }
    
    return true;
}


int main()
{
    int N;
    int i;
    scanf("%d", &N);

    for ( i = 0; i < N; i++ ) {
	Card c;
	scanf(" %c", &c.suit);
	scanf("%d", &c.value);
	Array1[i] = c;
	Array2[i] = c;
	// printf("%d: %c%d\n", i, c.suit, c.value);
    }

    BubbleSort( Array1, N );
    SelectionSort( Array2, N );
    printArray( Array1, N );
    printf("Stable\n");
    printArray( Array2, N );    

    if ( isStable( Array1, Array2, N ) ) {
	printf("Stable\n");
    }
    else {
	printf("Not stable\n");
    }

    return 0;
}