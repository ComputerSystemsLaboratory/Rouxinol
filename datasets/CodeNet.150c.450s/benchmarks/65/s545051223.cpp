
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct card {
    char suit;
    int value;
};

void bubbleSort(card A[], const int N)
{
    int flag = 1;

    for( int i = 0; flag; ++i ){
        flag = 0;

        for( int j = N-1; i < j; --j )
            if( A[j].value < A[j-1].value ){
                swap(A[j], A[j-1]);
                flag = 1;
            }
    }
}

void selectionSort(card A[], const int N)
{
    for( int i = 0; i < N; ++i ){
        int min = i;
      
        //iより後でA[i]より最も小さい値の添字を求める
        for( int j = i; j < N; ++j )
            if( A[j].value < A[min].value )
                min = j;
       
        //iとminが異なれば交換
        if( i != min ) swap(A[i], A[min]);
    }
}

int main()
{
    //入力
    int N;
    scanf("%d%*c", &N);
    card A[N], B[N]; //A:bubbleSort, B:selectionSort
    for( int i = 0; i < N; ++i ){
        scanf("%c%d%*c", &A[i].suit, &A[i].value);
        B[i] = A[i];
    }


    bubbleSort(A, N);
    selectionSort(B, N);


    //バブルソートの結果を出力
    for( int i = 0; i < N; ++i ){
        if( 0 < i ) printf(" ");
        printf("%c%d", A[i].suit, A[i].value);
    }
    printf("\n");
    printf("Stable\n");

    //選択ソートの結果を出力
    int flag = 1;
    for( int i = 0; i < N; ++i ){
        if( 0 < i ) printf(" ");
        printf("%c%d", B[i].suit, B[i].value);
        if( !(B[i].suit == A[i].suit && B[i].value == A[i].value) ) flag = 0;
    }
    printf("\n");
    if( flag ) printf("Stable\n");
    else printf("Not stable\n");

    return 0;
}
