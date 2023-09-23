#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int n, A[100000];

int main(void) {

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    // partition 
    int i = -1;
    for (int j = 0, x = A[n - 1]; j < n - 1; ++j) {
        if (A[j] <= x) {
            ++i;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    int tmp = A[++i];
    A[i] = A[n - 1];
    A[n-1] = tmp;

    printf("%d", A[0]);
    for (int j = 1; j < n; ++j) {
        if (j != i) {
            printf(" %d", A[j]);
        }
        else {
            printf(" [%d]", A[j]);
        }
    }
    printf("\n");

    return 0;
}