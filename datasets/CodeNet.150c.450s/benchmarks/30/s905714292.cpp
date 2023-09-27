#include <iostream>
#include <cstdio>
using namespace std;

int selectionSort(int A[], const int N)
{
    int cnt = 0;

    for( int i = 0; i < N; ++i ){
        int min = i;

	//iより後でA[i]より最も小さい値の添字を求める
        for( int j = i; j < N; ++j )
            if( A[j] < A[min] )
                min = j;

	//iとminが異なれば交換
        if( i != min ){
	   swap(A[i], A[min]);
	   ++cnt;
	}
    }

    return cnt;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for( int i = 0; i < N; ++i )
        scanf("%d", &A[i]);

    int cnt = selectionSort(A, N);

    for( int i = 0; i < N; ++i ){
        if( i ) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n%d\n", cnt);

    return 0;
}