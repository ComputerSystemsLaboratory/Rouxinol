#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=0&&x<=100){
        x=x*x*x;
        printf("%d\n",x);
    }
    return 0;
}