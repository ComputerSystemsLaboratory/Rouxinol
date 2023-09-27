#include <cstdio>
#include <utility>

using namespace std;

#define INFTY (1 << 30)
#define MAX 2000000

int n = 0, A[MAX + 1];

int parent( int i ){

    return i/2;

}

int left( int i ){

    return 2*i;

}

int right( int i ){

    return 2*i + 1 ;

}


void maxHeapify( int i){

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

        maxHeapify(largest);

    }

}

void heapIncreaseKey( int i, int key){

    if( key < A[i] ) return;

    A[i] = key;

    while( i > 1 && A[ parent(i) ] < A[i] ){

        swap( A[i], A[ parent(i) ] );

        i = parent(i);

    }

}

void insert( int key ){

    n++;
    A[n] = -INFTY;

    heapIncreaseKey( n, key);

}

int extract(){

    if( n < 1 ) return -INFTY;

    int max = A[1];

    A[1] = A[n];

    n--;

    maxHeapify( 1 );

    return max;

}

int main(){

    char com[10];
    int key;

    while(1){

        scanf("%s", com);

        if( com[0] == 'e' && com[1] == 'n'){
            
             break;

        } else if ( com[0] == 'i' ){

            scanf("%d", &key);

            insert(key);

        } else {

            int x = extract();

            printf("%d\n", x);

        }


    }

    return 0;

}
