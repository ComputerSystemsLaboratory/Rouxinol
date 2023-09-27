#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int *A;
    int i, H;
    scanf("%d", &H);
    A = new int[H + 1];
    for(i = 1; i <= H; i++) scanf("%d", &A[i]);
    for(i = 1; i <= H; i++){
        printf("node %d: key = %d, ", i, A[i]);
        if(i / 2 > 0){ printf("parent key = %d, ", A[i / 2]); }
        if(2 * i <= H){ printf("left key = %d, ", A[2 * i]); }
        if(2 * i + 1 <= H){ printf("right key = %d, ", A[2 * i + 1]); }
        printf("\n");
    }
    delete [] A;
    return 0;
}