#include <stdio.h>

int main(){
    int N,W;
    int i,j;
    int list[10001][101];
    int v[101],w[101];
    scanf("%d %d",&N,&W);
    for(i=1;i<=N;i++)scanf("%d %d",&v[i],&w[i]);
    for(i=0;i<=N;i++)for(j=0;j<=W;j++)list[j][i] = 0;
    for(i=1;i<=N;i++){
        for(j=1;j<=W;j++){
            if(j>=w[i]){
                if(list[j-w[i]][i-1]+v[i] > list[j][i-1]){
                    list[j][i] = list[j-w[i]][i-1]+v[i];
                }else{
                    list[j][i] = list[j][i-1];
                }
            }else{
                list[j][i] = list[j][i-1];
            }
        }
    }
    printf("%d\n",list[W][N]);
}