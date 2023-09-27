#include <cstdio>
#include <utility>

using namespace std;

//????????¢??°???

int partition( int n, int A[], int r){

    int x = A[ r ];
    int i, j;

    i = -1;

    for( int j = 0 ; j < r ; j++ ){

        if( A[j] <= x ){

            i = i + 1;

            swap( A[i], A[j]);

        }

    }

    swap( A[i+1], A[r] );

    return i+1;

}


//??¬???

int main(){

    int n, i, r, j;

    scanf("%d", &n);

    r = n - 1;

    int A[n];

    for( i = 0; i < n ; i++ ){

        scanf("%d", &A[i] );

    }

    j = partition( n, A, r);

    for( i = 0 ; i < n ; i++ ){

        if(i) printf(" ");

        if( i == j ) printf("[%d]", A[i]);
        else printf("%d", A[i]);

    }

    printf("\n");

}