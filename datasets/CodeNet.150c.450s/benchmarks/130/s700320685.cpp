#include<cstdio>

int main(void){
    int n, m;
    int i, j, k;
    int a[100][100];
    int b[100];
    int c[100];

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            int factor;
            scanf("%d", &factor);
            a[i][j] = factor;
        }
    }

    for(i = 0; i < m; i++){
        int factor;
        scanf("%d", &factor);
        b[i] = factor;
    }

    for(i = 0; i < n; i++) c[i] = 0;

    //??????
    for(i = 0; i < n; i++){
        for(k = 0; k < m; k++){
            c[i] += a[i][k] * b[k];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d\n", c[i]);
    }

    return 0;
}