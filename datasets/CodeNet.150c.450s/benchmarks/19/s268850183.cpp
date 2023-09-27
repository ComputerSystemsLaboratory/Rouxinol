#include <stdio.h>
int main(){
    int ang1,ang2;
    while(true){
        scanf("%d %d",&ang1,&ang2);
        if(ang1 == 0 && ang2 == 0) break;
        if(ang1 > ang2) printf("%d %d\n",ang2,ang1);
        else{
            printf("%d %d\n",ang1,ang2);
        }
    }
}
