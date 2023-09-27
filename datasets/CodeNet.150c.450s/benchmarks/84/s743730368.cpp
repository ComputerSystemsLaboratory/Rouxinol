#include<stdio.h>

#define MAX 200000
#define SENTINEL 1200000000

typedef long long hyper;
hyper cnt = 0;

void Merge(int* A, int left, int mid, int right)
{
    int L[MAX], R[MAX];
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;
    for(i = 0; i < n1; i++) L[i] = A[i + left];
    for(j = 0; j < n2; j++) R[j] = A[j + mid];

    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    i = j = 0;

    // sorting.
    for(k = left; k < right; k++){

        if(L[i] <= R[j]){ A[k] = L[i]; i++; }

        else{ A[k] = R[j]; j++; cnt = cnt + n1 - i; } // add n1 - i.
    }
}

void MergeSort(int* A, int left, int right)
{
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid, right);
        Merge(A, left, mid, right);
    }
}

int main()
{
    int i, n, A[MAX];
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    MergeSort(A, 0, n);
    printf("%lld\n", cnt);

    return 0;
}