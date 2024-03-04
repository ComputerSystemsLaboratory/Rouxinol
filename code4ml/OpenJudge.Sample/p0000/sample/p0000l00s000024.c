#include<stdio.h>
int main(void){
    int a=0,b=0,c=0,i;
    int x=0;

    for(i=0;i<10;i++){
        scanf("%d",&x);
        if(a<x){
            b=a;
            a=x;
        }else if(a>x && b<x){
            c=b;
            b=x;
        }else if(b>x && c<x){
            c=x;
        }
    }printf("%d\n%d\n%d",a,b,c);
    return 0;
}