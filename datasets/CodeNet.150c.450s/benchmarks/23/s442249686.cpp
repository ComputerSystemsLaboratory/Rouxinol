#include <iostream>
#include <stdio.h>

int n;
int F[50];

int main() {
    scanf("%d", &n);
    F[0] = F[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    
    printf("%d\n", F[n]);
}


