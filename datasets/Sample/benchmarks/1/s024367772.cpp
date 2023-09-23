#include <stdio.h>
#include <iostream>
using namespace std;

int partition(int* A, int p, int r){
    int x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}


int main(void){
    int n;
    scanf("%d", &n);

    int A[100000];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int k = partition(A, 0, n - 1);

    for(int i = 0; i < n; i++){
        if (i == k){
            printf("[%d] ", A[i]);
        }else if(i == n - 1){
            printf("%d\n", A[i]);
        }else{
            printf("%d ", A[i]);
        }
    }

}

