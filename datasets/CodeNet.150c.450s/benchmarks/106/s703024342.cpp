#include<stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    while(a<=b){
        if (c%a==0) {
                x ++;
        }
    a ++;
    }
    printf("%d\n",x);
    return 0;
}