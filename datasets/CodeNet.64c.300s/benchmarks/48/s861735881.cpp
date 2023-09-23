#include <stdio.h>
#include <stdlib.h>

int main(void){
        int n,i,j,c;
        int *p;
        while(scanf("%d",&n)!=EOF){
                c=0;
                if((p=(int *)malloc(sizeof(int)*(n+1)))==NULL){
                        return 1;
                }
                for(i=0;i<=n;i++){
                        p[i]=i;
                }
                for(i=2;i<=n;i++){
                        if(p[i]!=-1){
                                c++;
                                for(j=i;j<=n;j=j+i){
                                        p[j]=-1;
                                }
                        }
                }
                free(p);
                printf("%d\n",c);
        }
}