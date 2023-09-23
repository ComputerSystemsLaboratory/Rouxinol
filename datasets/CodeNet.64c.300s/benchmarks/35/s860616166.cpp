#include <iostream>
#include <stdio.h>

#define MAX 101

int main() {
    int n;
    int M[MAX][MAX];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            M[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        int id, k;
        scanf("%d %d", &id, &k);
        if (k == 0) continue;
        else {
            for (int j = 1; j <= k; j++) {
                int v; scanf("%d", &v);
                M[id][v] = 1;
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n) printf("%d\n", M[i][j]);
            else printf("%d ", M[i][j]);
        }
    }
    
    return 0;
}

