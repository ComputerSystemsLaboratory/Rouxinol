#include <stdio.h>

void merge(int* A, int left, int mid, int right, int* count){
    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1];
    for(int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    int R[n2];
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + i];
    }

    L[n1] = 1000000001;
    R[n2] = 1000000001;

    int i = 0;
    int j = 0;
    int k = 0;
    for(k = left; k < right; k++){
        (*count)++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int* A, int left, int right, int* count){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(A, left, mid, count);
        mergeSort(A, mid, right, count);
        merge(A, left, mid, right, count);
    }
}

int main(void){
    int n;
    int A[500000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int count = 0;
    mergeSort(A, 0, n, &count);

    for(int i = 0; i < n; i++){
        printf("%d", A[i]);
        if(i == n - 1){
            printf("\n");
        }else{
            printf(" ");
        }
    }

    printf("%d\n", count);

    return 0;
}

