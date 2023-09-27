#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int V[101][101];
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            V[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        int num1;
        scanf("%d", &num1);

        int n;
        scanf("%d", &n);

        int num2;
        for(int j = 0; j < n; j++){
            scanf("%d", &num2);
            V[num1][num2] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1){
                printf("%d", V[i][j]);
            }else{
                printf(" %d", V[i][j]);
            }
        }
        printf("\n");
    }
}

