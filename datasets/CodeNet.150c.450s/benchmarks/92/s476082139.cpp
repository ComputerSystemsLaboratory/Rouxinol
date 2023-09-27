#include<stdio.h>
#include<string>
#include<iostream>

int main(){
    int a, b;
    while (std::cin >> a >> b){
        std::string sum = std::to_string(a+b);
        printf("%ld\n", sum.length());
    }
    return 0;
}