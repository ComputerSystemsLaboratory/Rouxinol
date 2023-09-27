#include<stdio.h>
using namespace std;

int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int matrix[101][101]={};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
            matrix[i][c] += matrix[i][j];
            matrix[r][j] += matrix[i][j];
            matrix[r][c] += matrix[i][j];
        }
    }
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c+1;j++){
            if(j<c){
                printf("%d ",matrix[i][j]);
            }else{
                printf("%d",matrix[i][j]);
            }
        }printf("\n");
    }
}

