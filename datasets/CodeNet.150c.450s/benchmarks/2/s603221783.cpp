#include <iostream>
#include <math.h>
#include <stdio.h>
#define MAX 100001

int A[MAX];
int n;

int partition(int r) {
    int judge_n = A[r];
    int i = -1;
    int j = 0;
    for (j = 0; j < n; j++) {
        if (A[j] <= judge_n) {
            i++;
            std::swap(A[i], A[j]);
        }
    }
    return i;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // ????????????????????????????????¨??????
    int index = partition(n-1);
    
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        if (i == index) printf("[%d]", A[i]);
        else printf("%d", A[i]);
    }
    printf("\n");
    
    return 0;
}