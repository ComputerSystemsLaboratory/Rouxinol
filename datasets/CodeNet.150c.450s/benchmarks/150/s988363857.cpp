//
//  main.cpp
//  ALDS1_6
//
//  Created by ptyuan on 2018/10/31.
//  Copyright © 2018 YY. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int n = 0;

void CountingSort(int *A, int *B, int k) {
    int *C = (int *)malloc(sizeof(int) * k + 1);
    for (int i = 0; i <= k; i++) {
        C[i] = 0;
    }
    
    for (int i = 1; i <= n; i++) {
        C[A[i]]++;
    }
    
    for (int i = 1; i <= k; i++) {
        C[i] += C[i - 1];
    }
    
    for (int j = n; j >= 1; j--) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    free(C);
}

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    int *A = (int *)malloc(sizeof(int) * n + 1);
    int *B = (int *)malloc(sizeof(int) * n + 1);
    int _max = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", A + i);
        _max = max(_max, A[i]);
    }
    CountingSort(A, B, _max);
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            printf(" ");
        }
        printf("%d", *(B + i));
    }
    printf("\n");
    free(A);
    free(B);
    return 0;
}

