#include <stdio.h>
int main(){
    int a[4][3][10]={0},n,x,y,z,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&x,&y,&z,&temp);
        a[x-1][y-1][z-1]+=temp;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                printf(" %d",a[i][j][k]);
            }
            printf("\n");
        }
        if(i<3){
            for(int j=0;j<20;j++){
            printf("#");
            }
            printf("\n");
        }
    }
}