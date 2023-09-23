#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    while(~scanf("%d%d",&a,&b)){
        printf("%d\n",(int)log10((double)(a+b))+1);
    }
}