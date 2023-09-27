#include<stdio.h>
#include <math.h>

int main(){
    int a,b,d;
    while(scanf("%d %d",&a,&b)!=EOF){
        d = (int)log10(a+b);
        printf("%d\n",d+1);
    }
}