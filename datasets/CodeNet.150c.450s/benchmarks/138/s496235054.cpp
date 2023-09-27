#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    while(1){
        if(a>b){
            int t=b;
            b=a;
            a=t;
        }
        b=b%a;
        if(b==0) break;
    }
    printf("%d\n",a);
    return 0;
}