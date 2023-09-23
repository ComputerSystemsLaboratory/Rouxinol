#include <cstdio>

void swap(int z[], int a, int b) {
    int tmp = z[a];
    z[a] = z[b];
    z[b] = tmp;
}

int main ()
{
    int n;
    scanf("%d", &n);
    int A[100];
    for (int i=0; i<n; i++) scanf("%d", &A[i]);

    int swp = 0;
    for (int i=0; i<n-1; i++) {
        int mini = i;
        for (int j=i+1; j<n; j++) {
            if (A[j] < A[mini]) mini = j;
        }

        if (i != mini) {
            swp++;
            swap(A, i, mini);
        }
    }

    for (int i=0; i<n; i++) {
        printf("%d", A[i]);
        if (i == n-1) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    printf("%d\n", swp);
}