#include<iostream>

long long factorial(long long n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main(void){
    int n;
    std::cin>>n;
    std::cout<<factorial(n)<<std::endl;
    return 0;
}
