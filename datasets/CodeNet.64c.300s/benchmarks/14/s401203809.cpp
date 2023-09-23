#include <iostream>

void SLE(int a, int b);
int main(){
    int a, b;
    std::cin>> a >> b;
    SLE(a, b);
}

void SLE(int a, int b){
    if(a>b) std::cout<< "a > b\n";
    else if(a<b) std::cout<< "a < b\n";
    else std::cout<< "a == b\n";
}