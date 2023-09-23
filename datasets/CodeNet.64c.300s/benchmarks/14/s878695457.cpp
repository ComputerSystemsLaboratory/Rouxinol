#include<stdio.h>
int main(){
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b) {
                printf("a > b\n");
        }else if(a<b){
                printf("a < b\n");
        }else{
                printf("a == b\n");
        }return 0;
}