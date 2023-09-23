#include<stdio.h>


#define max(a,b) ((a>b)?a:b)

int main(void){
    int r,c,n,map[10][10000],ans,tmp,i,j,h,digit[10]={1,2,4,8,16,32,64,128,512,1024},status[10],line;
    scanf("%d%d",&r,&c);
    while(r!=0 || c!=0){
        n = 1;
        ans = 0;
        for(i=0; i<r; i++){
            n*=2;
            for(j=0; j<c; j++){
                scanf("%d",&map[i][j]);
            }
        }
        for(i=0; i<n; i++){
            tmp = 0;
            for(j=0; j<r; j++){
                status[j] = (i&digit[j])?1:0;
            }
            for(j=0; j<c; j++){
                line = 0;
                for(h=0; h<r; h++){
                    line+=(map[h][j]^status[h]);
                }
                tmp+=max(line,r-line);
            }
            if(ans<tmp){
                ans = tmp;
            }
        }
        printf("%d\n",ans);
        scanf("%d%d",&r,&c);
    }
    return 0;
}