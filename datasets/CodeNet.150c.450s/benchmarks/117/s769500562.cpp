#include <stdio.h>

using namespace std;
#define MAX 500000
int temp[MAX], count;

void merge(int A[], int lo, int mid, int hi) {
    for(int i = lo; i <= hi; i++) {
        temp[i] = A[i];
    }
    int i = lo, j = mid+1;
    for(int k = lo; k <= hi; k++) {
        count++;
        if(i > mid) {
            A[k] = temp[j++];
        }
        else if(j > hi) {
            A[k] = temp[i++];
        }
        else if(temp[i] <= temp[j]) {
            A[k] = temp[i++];
        }
        else {
            A[k] = temp[j++];
        }

    }
}

void mergeSort(int A[], int lo, int hi) {
    if(lo >= hi) return;
    int mid = (lo + hi) / 2;
    mergeSort(A, lo, mid);
    mergeSort(A, mid+1, hi);
    merge(A, lo, mid, hi);
}

int main()
{
    int n;
    int A[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    mergeSort(A, 0, n-1);
    for(int i = 0; i < n; i++) {
        printf("%d", A[i]);
        if(i != n-1) printf(" ");
    }
    printf("\n%d\n", count);
    return 0;
}