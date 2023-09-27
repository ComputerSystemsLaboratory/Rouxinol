#include <iostream>
#include <stdio.h>
#define MAX 101

int A[MAX];


int main() {
    int n, x;
    int sum = 0;

    while (1) {
        scanf("%d %d", &n, &x);
        if ( n == 0 && x == 0 ) break;
        for (int i = 1; i <= n; i++) A[i] = i;

        for (int i = 1; i <= n-2; i++) {
            for (int j = i+1; j <= n-1; j++) {
                for (int k = j+1; k <= n; k++) {
                    if (A[i] + A[j] + A[k] == x) sum ++;
                }
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;

}