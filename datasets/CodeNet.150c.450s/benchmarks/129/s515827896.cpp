#include<stdio.h>
int main(){
    int i, j;
    int r, c;
    int a[101][101]={0};
    
    scanf("%d %d", &r, &c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
            a[i][c]+=a[i][j];
            a[r][j]+=a[i][j];
            a[r][c]+=a[i][j];
        }
    }
    for(i=0; i<r+1; i++){
        for(j=0; j<c+1; j++){
            if(j!=c){
                printf("%d ", a[i][j]);
            }
            else printf("%d\n", a[i][j]);
        }
    }
    return 0;
}