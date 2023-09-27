#include<stdio.h>

#define SIZE 500000
#define INFTY 1200000000
int count = 0;

void show(int* a, int size)
{
    int i;
    printf("%d", a[0]);
    for(i = 1; i < size; i++) printf(" %d", a[i]);
	printf("\n");
}

void Merge(int* A, int left, int mid, int right)
{
    int R[SIZE], L[SIZE];
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;
    for(i = 0; i < n1; i++) L[i] = A[i + left];
    for(j = 0; j < n2; j++) R[j] = A[j + mid];

    L[n1] = INFTY;
    R[n2] = INFTY;
    i = j = 0;

    for(k = left; k < right; k++){

		if(L[i] <= R[j]){ A[k] = L[i]; i++; }

        else{ A[k] = R[j]; j++; }

        count++;
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
    return;
}

int main()
{
    int i, n, S[SIZE];
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &S[i]);

    MergeSort(S, 0, n);
    show(S, n);
    printf("%d\n", count);

    return 0;
}