#include <stdio.h>

int main() {
    int n, m, l, tmp;
    
    scanf("%d", &n);
    
    int M[n][n];
    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            M[i][j] = 0;
        }
    }
    
    for (int i=0; i<n; i++) {
        scanf("%d %d", &m, &l);
        for (int j=0; j<l; j++) {
            scanf("%d", &tmp);
            M[m-1][tmp-1] = 1;
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j) printf(" ");
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
