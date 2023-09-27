#include<stdio.h>
#include<iostream>

#define MAX 2000001
#define VMAX 10000

using namespace std;

int main()
{
    int *A, *B;

    int C[VMAX+1];
    int n, i, j;
    scanf("%d", &n);

    A=new int[n+1];
    B=new int[n+1];

    for(int i=0; i<=VMAX; i++) C[i]=0;

    for(int i=0; i<n; i++){
        scanf("%d", &A[i+1]);
        C[A[i+1]]++;
    }

    for(int i=1; i<=VMAX; i++)
        C[i]=C[i]+C[i-1];

    for(int j=1; j<=n; j++){
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }

    for(int i=1; i<=n; i++){
        if(i>1) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");
    return 0;
}


