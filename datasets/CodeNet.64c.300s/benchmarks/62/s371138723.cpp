#include <cstdio>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int vector[m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &vector[i]);
    }

    int solution[n];

    for(int i = 0; i < n; i++) solution[i] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            solution[i] += matrix[i][j]*vector[j];
        }
    }

    for(int i = 0;i < n; i++)
        printf("%d\n", solution[i]);

    return 0;
}