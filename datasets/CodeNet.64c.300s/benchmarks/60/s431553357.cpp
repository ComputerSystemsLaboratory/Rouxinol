#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    int gx,gy,kx,ky;
    while(1){
        int fie[18][18]={0},fieko[18][18]={0};
        fie[1][0]=1;
        scanf("%d%d",&gx,&gy);
        if(gx==0,gy==0)
            break;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d%d",&kx,&ky);
            fieko[ky][kx]=1;
        }
        for(int i=1;i<=gy;i++){
            for(int j=1;j<=gx;j++){
                if(fieko[i][j]==1)
                    continue;
                else{
                    fie[i][j]=fie[i][j-1]+fie[i-1][j];
                    
                    /*
                    for(int k=0;k<=gy;k++){
                        for(int l=0;l<=gx;l++){
                            printf("%d ",fie[k][l]);
                        }
                        puts("");
                    }
                    puts("");
                    */

                }
            }
        }
        printf("%d\n",fie[gy][gx]);
    }
    return 0;
}