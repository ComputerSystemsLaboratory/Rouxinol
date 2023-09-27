#include<stdio.h>

int main(void){
    int x,y,z;
    scanf("%d %d",&x,&y);
    z = x*y;
    y = (x + y)*2;
    printf("%d %d\n",z,y);
    return 0;
}