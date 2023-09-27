#include <cstdio>
#include <utility>

using namespace std;

int parent( int i ){

    return i/2;

}

int left( int i ){

    return 2*i;

}

int right( int i ){

    return 2*i + 1 ;

}


void maxHeapify( int A[], int i, int n){

    int l, r, largest;

    l = left(i);
    r = right(i);

    //左の子、自分、右の子のうち最大の値を持つものを選ぶ

    if( l <= n &&  A[l] > A[i] ){

        largest = l;

    } else {

        largest = i;

    }

    if( r <= n && A[r] > A[largest] ){

        largest = r;

    }

    if( largest != i ){

        swap( A[i], A[largest] );

        maxHeapify( A, largest, n );

    }

}

void buildMaxHeap( int A[], int n){

    int i;

    for( i = n / 2 ; i > 0; i-- ){

        maxHeapify( A, i, n);

    }

}


int main(){

    int n, i;

    scanf("%d", &n);

    int A[ n+1 ];

    for( i = 1; i <= n; i++) scanf("%d", &A[i]);

    buildMaxHeap( A, n);

    for( i = 1; i <= n; i++) printf(" %d", A[i]);

    printf("\n");

    return 0;

}
