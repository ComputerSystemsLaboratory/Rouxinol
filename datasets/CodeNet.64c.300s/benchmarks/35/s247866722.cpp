#include <iostream>
#include <stdio.h>
#define MAX 101


int main() {
    int n;
    int id = 0;
    int M[MAX][MAX] = { 0 };
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int k = 0;
        scanf("%d %d", &id, &k);
        
        if (k == 0) continue;
        
        for (int j = 1; j <= k; j++) {
            int a = 0;
            scanf("%d", &a);
            M[i][a] = 1;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= 2) printf(" ");
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}