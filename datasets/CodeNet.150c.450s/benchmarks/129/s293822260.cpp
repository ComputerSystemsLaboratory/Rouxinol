#include <stdio.h>

int main(){
    int r,c;
    int s;
    int i,j;
    scanf("%d %d",&r,&c);
    int list[r+1][c+1];
    for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&list[i][j]);
    for(i=0;i<r;i++){
        s = 0;
        for(j=0;j<c;j++)s += list[i][j];
        list[i][c] = s;
    }
    for(j=0;j<c;j++){
        s = 0;
        for(i=0;i<r;i++)s += list[i][j];
        list[r][j] = s;
    }
    s = 0;
    for(j=0;j<c;j++)s += list[r][j];
    list[r][c] = s;
    for(i=0;i<=r;i++){
        for(j=0;j<=c;j++){
            printf("%d",list[i][j]);
            printf(j-c? " ":"\n");
        }
    }
}