#include <stdio.h>

int main(){
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);

    if(!(d1 < d2 && d2 < d3)){
        printf("No\n");
    }else{
        printf("Yes\n");
    }

    return 0;
}
