#include <cstdio>
int main(){
    int h, w;
    int i, j;
    scanf("%d%d", &h, &w);
    int sheet[101][101] = {};
    for (i = 0; i < h; i++){
        for (j = 0; j < w; j++){
            scanf("%d", &sheet[i][j]);
            sheet[i][w] += sheet[i][j];
            sheet[h][j] += sheet[i][j];
            sheet[h][w] += sheet[i][j];
        }
    }
    for (int i = 0; i < h + 1; i++){
        for (int j = 0; j < w + 1; j++){
            printf("%d", sheet[i][j]);
            if (j != w) printf(" ");
        }
        printf("\n");
    }
    return 0;
}