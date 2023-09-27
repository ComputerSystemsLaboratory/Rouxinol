#include <iostream>
#include <stdio.h>

#define MAX 500000
#define INFINITY 1000000000

int n;
int L[MAX/2+1], R[MAX/2+1];
int sum(0);

void Merge(int A[], int left, int mid, int right) {
    int n1 = mid-left;
    int n2 = right-mid;
    for ( int i = 0; i < n1; i++ ) {
        L[i] = A[ left + i ];
    }
    for ( int i = 0; i < n2; i++ ) {
        R[i] = A[ mid + i ];
    }
    L[n1] = INFINITY;
    R[n2] = INFINITY;
    int i = 0, j = 0;
    for ( int k = left; k < right; k++ ) {
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i++;
            sum++;
        } else {
            A[k] = R[j];
            j++;
            sum++;
        }
    }
}


void mergeSort(int A[], int left, int right) {
    if ( left + 1 < right ) {
        int mid = ( left + right ) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        Merge(A, left, mid, right);
    }
}


int main() {
    int A[MAX];
    
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &A[i]);
    }
    
    mergeSort(A, 0, n);
    for ( int i = 0; i < n; i++ ) {
        if (i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n%d\n", sum);
    
    return 0;
}