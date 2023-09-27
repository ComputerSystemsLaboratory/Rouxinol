#include<stdio.h>

int main(){
     int x;    
      
     do{
       scanf("%d", &x);
     }while(x<0 || 100<x);
     
    printf("%d\n", x*x*x);

    return 0;
}