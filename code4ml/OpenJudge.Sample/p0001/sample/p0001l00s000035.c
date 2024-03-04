#include<stdio.h>



int main(){
    
    int a, b;
    while(
          (scanf("%d",&a)) !=EOF){
    scanf("%d",&b);
    int sum=a+b;
    int i, count=0;
    for(i=1;sum>=i;i*=10){
        count++;
    }
    printf("%d\n",count);
    }
    return 0;
}