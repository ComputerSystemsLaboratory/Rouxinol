#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n+1], B[n+1], C[10000+1];
    
    for (int i=0; i<10000+1; i++) {
        C[i] = 0;
    }
    
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i+1]);
        C[A[i+1]]++;
    }
    
    for (int i=0; i<10000+1; i++) C[i+1] = C[i+1] + C[i];
    
    for (int j=0; j<n; j++) {
        B[C[A[j+1]]] = A[j+1];
        C[A[j+1]]--;
    }
    
    for (int i=0; i<n; i++) {
        if(i) printf(" ");
        printf("%d", B[i+1]);
    }
    printf("\n");
    
    return 0;
}
