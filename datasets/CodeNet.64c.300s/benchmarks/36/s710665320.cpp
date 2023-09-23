#include <stdio.h>
int main(void){
    int a,b,c,x,y;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        x=a;
        y=b;
    }else {
        x=b;
        y=a;
    }
    if(c<x)printf("%d %d %d\n",c,x,y);
    else if(c>y)printf("%d %d %d\n",x,y,c);
    else {printf("%d %d %d\n",x,c,y);}
    return 0;
}
    