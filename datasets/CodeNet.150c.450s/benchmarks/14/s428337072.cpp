#include<stdio.h>

int main(void){
    int n=0 ,i ,x ;
    scanf("%d",&n);

    for (i=1 ;i<n+1 ;i++){
        x=i;
        if ((x%3)==0){
            printf(" %d",i);
        } else while(1){
            if ((x%10)==3){
                printf(" %d",i);
                break;
            }
            x/=10;
            if (!x) break;
        }
    }

    printf("\n");
    return 0;
}