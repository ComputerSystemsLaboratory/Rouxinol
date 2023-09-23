#include<iostream>
#include<stdio.h>

int main(){
    int x,y;
    
    while(scanf("%d %d",&x,&y) && (x != 0 || y != 0)){
        if(x > y) std::swap(x,y);
        printf("%d %d\n",x,y);
    }
    
    return 0;
}

