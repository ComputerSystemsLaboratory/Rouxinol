#include<stdio.h>

#define MAX 250

int n;
int A[MAX];

void printNode() {
    for (int i = 1; i <= n; ++i) {
        printf("node %d: key = %d, ", i, A[i]);
        if (i/2 > 0) {
            printf("parent key = %d, ", A[i/2]);
        }
        if (i*2 <= n) {
            printf("left key = %d, ", A[i*2]);
        }
        if (i*2+1 <= n) {
            printf("right key = %d, ", A[i*2+1]);
        }
        printf("\n");
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &A[i]);
    }
    printNode();
    return 0;
}