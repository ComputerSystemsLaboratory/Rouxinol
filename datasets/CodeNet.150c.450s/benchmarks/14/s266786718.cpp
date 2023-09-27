#include<stdio.h>
int main(void){
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if(i%3==0){
            printf(" %d",i);
        }
        else if(i%10==3){
            printf(" %d",i);
        }
        else if(i%100/10==3){
            printf(" %d",i);
        }
        else if(i%1000/100==3){
            printf(" %d",i);
        }
        else if(i%10000/1000==3){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}