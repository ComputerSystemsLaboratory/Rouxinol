#include <stdio.h>
#include<stdlib.h>

#define MAX 2000000
#define VMAX 10000

using namespace std;

int main()
{
    unsigned short *A, *B;
    int C[VMAX + 1];
    int n, i, j;
    scanf("%d", &n);

    A = (unsigned short *)malloc(sizeof(unsigned short) * n + 1);
    B = (unsigned short *)malloc(sizeof(unsigned short) * n + 1);

    for(i = 0; i < VMAX; i++) C[i] = 0;

    for(i = 0; i < n; i++) {
        scanf("%hu", &A[i+1]);
        C[A[i+1]]++;
    }

    for(i = 1; i <= VMAX; i++) {
        C[i] = C[i] + C[i-1];
    }

    for(i = 1; i <= n; i++) {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }

    for(int i = 1; i <= n; i++) {
        printf("%d", B[i]);
        if(i != n) printf(" ");
    }
    printf("\n");

    return 0;
}