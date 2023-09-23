#include <cstdio>

int BubbleSort(int a[], int n) {
    int swp = 0;
    for (int i=0; i<n; i++) {
        for (int j=n-1; j > i; j--) {
            if (a[j] < a[j-1]) {
                int tmp = a[j];
                    a[j] = a[j-1];
                    a[j-1] = tmp;
                    swp++;
            }
        }
    }
    return swp;
}

int main () {
    int n;
    int A[100];
    scanf("%d", &n);
    for (int i=0; i<n;i++) scanf("%d", &A[i]);
    int swp = BubbleSort(A, n);
    for (int i=0; i<n; i++) {
        if (i < n-1) {
            printf("%d ", A[i]);
        } else {
            printf("%d\n", A[i]);
        }
    }
    printf("%d\n", swp);
    return 0;
}