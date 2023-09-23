#include<stdio.h>
int main(){
    int a,b,i;
    while(~scanf("%d",&a)){
        b=i=0;
        for(;i<600/a;){
            b+=a*i*a*i++*a;
        }
        printf("%d\n",b);
    }
}