#include <stdio.h>
 
int main() {
    int i, A, K, N[200001];
    long long int tmp;
 
    scanf("%d%d", &A, &K);
    
    for (i = 0; i < A; i++) {
        scanf("%d", N + i);
    }
 
    for (i = K; i < A; i++) {
        if (N[i] >N[i - K]) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
}