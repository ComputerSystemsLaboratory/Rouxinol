#include<stdio.h>
int main(void){
    int a,b;
    for(;scanf("%d%d",&a,&b)!=EOF;){
        int wa=a+b;
        int cnt=1;
        while(!(wa<10)){
            wa/=10;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}