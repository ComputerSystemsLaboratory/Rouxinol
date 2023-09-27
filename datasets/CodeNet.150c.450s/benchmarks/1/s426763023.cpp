#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define NUM 100000
#define INF 1000000000


int main(void){
    int n;
    int a[NUM];
    int length = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int A[NUM];
    for(int i = 0; i < n; i++){
        A[i] = INF;
    }

    for(int i = 0; i < n; i++){
        int* t = upper_bound(A, A + length, a[i] - 1);
        *t = a[i];
        if (A[length] != INF){
            length++;
        }
        /*
        for(int i = 0; i < length; i++){
            printf(" %d", A[i]);
        }
        printf("\n");
        */
            
    }
    
    printf("%d\n", length);
}

