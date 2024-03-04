#include<stdio.h>
int main(void){
    int a,b,c,i,j,k,o,p,q,x,y,z;
    scanf("%d%d%d%d%d%d",&a,&b,&o,&p,&x,&y);
    /*printf("%d",a+b);*/
    c=a+b;
    q=o+p;
    z=x+y;
    for(i=1;c>=10;i++)c=c/10;
    for(j=1;q>=10;j++)q=q/10;
    for(k=1;z>=10;k++)z=z/10;
    printf("%d\n%d\n%d\n",i,j,k);



    return 0;
}