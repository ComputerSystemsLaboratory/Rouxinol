#include <stdio.h>
#define MAX 100000
using namespace std;


void swap(int A[], int index1, int index2) {
    int temp;
    temp = A[index1];
    A[index1] = A[index2];
    A[index2] = temp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p -1;
    for(int j = p; j <= r-1; j++) {
        if(A[j] <= x) {
            i = i + 1;
            swap(A, i, j);
        }
    }
    swap(A, i+1, r);
    return i+1;
}

int main()
{
    int n, A[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int index = partition(A, 0, n-1);
    for(int i = 0; i < n; i++) {
        if(i == index)
            printf("[%d]", A[i]);
        else
            printf("%d", A[i]);
        if(i != n-1) printf(" ");
    }
    printf("\n");
    return 0;
}