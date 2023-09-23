#include <iostream>
#include <cstdio>
using namespace std;

void swap(int A[], int i, int j) {
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}

int partition(int A[], int p, int r) {
    int pivot = A[r];
    int i, j;

    i = p - 1;
    for(j = 0; j < r; j++) {
        if(A[j] <= pivot) {
            i++;
            swap(A, i, j);
        }
    }
    swap(A, i + 1, r);
    return i + 1;
}

int main() {
    int n; cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int q = partition(A, 0, n - 1);
    for(int i = 0; i < n; i++) {
        if(i > 0) printf(" ");
        if(i == q)
            printf("[%d]", A[i]);
        else
            printf("%d", A[i]);
    }
    printf("\n");
}