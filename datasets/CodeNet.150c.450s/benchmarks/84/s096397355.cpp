#include<stdio.h>

#define SIZE 200000
#define INFTY 1200000000
long long cnt = 0;  // number of inversion.

int upperbound(int x, int* R, int N)
{
    // R[0], R[1], ... , R[N].
    if(x < R[0]) return 0;
   
	int left, right, mid;
    left = 0;
    right = N;

    while(right - left > 1){
        mid = (left + right) / 2;
        if(R[mid] < x){
            left = mid;
        }else{
             right = mid;
        }
    };
    return right;
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

    // calculate inversion number.
    for(k = 0; k < n1; k++){
        cnt = cnt + upperbound(L[k], R, n2);
    }

    // Sorting.
    for(k = left; k < right; k++){

        if(L[i] <= R[j]){ A[k] = L[i]; i++; }

        else{ A[k] = R[j]; j++; }
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
    int i, n, A[SIZE];
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    MergeSort(A, 0, n);
    printf("%lld\n", cnt);

    return 0;
}