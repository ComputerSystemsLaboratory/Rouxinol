#include <stdio.h>

int partition(int A[], int p, int q)
{
    int x, i, j, t;
    x = A[q];
    i = p-1;
    for (j = p; j < q; j++) {
        if (A[j] <= x) {
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    A[q] = A[i+1];
    A[i+1] = x;
    return i+1;
}

int partition_original(int A[], int p, int q)
{
    int x = A[q];
    int l = p, r = q;
    while (l < r) {
        while (A[l] < x) l++;
        while (A[r] > x) r--;
        if (l > r) break;
        int tmp = A[l]; A[l] = A[r]; A[r] = tmp;        
    }
    return l;
}

int main()
{
    int A[100000];
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int p = partition(A, 0, n-1);
    
    for (i = 0; i < n; i++) {
        if (i == p) printf("[");
        printf("%d", A[i]);
        if (i == p) printf("]");
        if (i < n-1) printf(" ");
    }
    puts("");
    
    return 0;
}