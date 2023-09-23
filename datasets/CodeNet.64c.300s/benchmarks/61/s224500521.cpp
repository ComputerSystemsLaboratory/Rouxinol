#include <cstdio>
int main(){
    int h, w, sum = 0;
    int i, j;
    scanf("%d%d", &h, &w);
    int sheet[101][101] = {};
    for (i = 0; i < h; i++){
        for (j = 0; j < w; j++){
            scanf("%d", &sheet[i][j]);
            sum += sheet[i][j];
        }
        sheet[i][w] = sum;
        sum = 0;
    }
    for (int k = 0; k < w + 1; k++){
        for (int l = 0; l < h; l++){
            sheet[h][k] += sheet[l][k];
        }
    }
    for (int k = 0; k < h + 1; k++){
        for (int l = 0; l < w + 1; l++){
            printf("%d", sheet[k][l]);
            if (l != w) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}