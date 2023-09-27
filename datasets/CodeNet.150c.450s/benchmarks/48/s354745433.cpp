#include<stdio.h>
#define INF 1000000
int main(){
    while(true){
        int e,ans=INF;
        scanf("%d",&e);
        if(e==0) return 0;
        for(int z=0;z*z*z<=e;z++){
            for(int y=0;y*y+z*z*z<=e;y++){
                if(ans>e-y*y-z*z*z+y+z) ans=e-y*y-z*z*z+y+z;
            }
        }
        printf("%d\n",ans);
    }
}