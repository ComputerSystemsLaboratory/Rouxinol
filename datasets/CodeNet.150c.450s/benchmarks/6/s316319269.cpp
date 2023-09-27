#include <iostream>

void Range(int a, int b, int c);
int main(){
    int a, b, c;
    std::cin>> a >> b >> c;
    Range(a, b, c);
}

void Range(int a, int b, int c){
    if(c>b && b>a) std::cout<< "Yes\n";
    else std::cout<< "No\n";
}