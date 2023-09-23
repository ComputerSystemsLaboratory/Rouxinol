#include <stdio.h>

int main(){
    int n,b,f,r,v;
    scanf("%d",&n);
    int o[3][10] = {};//1棟
    int p[3][10] = {};//2棟
    int q[3][10] = {};//3棟
    int t[3][10] = {};//4棟
    for(int k = 1; k <= n; k++){
        scanf("%d%d%d%d",&b,&f,&r,&v);
        if(b==1){
            o[f-1][r-1] = o[f-1][r-1] + v;
            if(o[f-1][r-1] < 0){
                o[f-1][r-1] = 0;
            }
        }
        else if(b==2){
            p[f-1][r-1] = p[f-1][r-1] + v;
            if(p[f-1][r-1] < 0){
                p[f-1][r-1] = 0;
            }
        }
        else if(b==3){
            q[f-1][r-1] = q[f-1][r-1] + v;
            if(q[f-1][r-1] < 0){
                q[f-1][r-1] = 0;
            }
        }
        else{
            t[f-1][r-1] = t[f-1][r-1] + v;
            if(t[f-1][r-1] < 0){
                t[f-1][r-1] = 0;
            }
        }
    }
    for(int k = 1; k <= 4;k++){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 10; j++){
                if(k == 1){
                    printf(" %d",o[i][j]);
                }
                else if(k == 2){
                    printf(" %d",p[i][j]);
                }
                else if(k == 3){
                    printf(" %d",q[i][j]);
                }
                else {
                    printf(" %d",t[i][j]);
                }
            }
            printf("\n");
        }
        if(k != 4){
            printf("####################\n");
        }
    }
    return 0;
}
