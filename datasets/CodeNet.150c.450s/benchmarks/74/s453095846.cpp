#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,min,tmp;
    int coin[20],*list;
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)scanf("%d",&coin[i]);
    list = (int *)calloc(n+1,sizeof(int));
    list[0] = 0;
    for(j=1;j<=n;j++){
        min = j;
        for(i=0;i<m;i++){
            if(coin[i]<=j){
                tmp = list[j-coin[i]]+1;
                if(min>tmp)min = tmp;
            }
        }
        list[j] = min;
    }
    printf("%d\n",list[n]);
}