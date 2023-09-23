#include<stdio.h>
#include<iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a < b && b < c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
