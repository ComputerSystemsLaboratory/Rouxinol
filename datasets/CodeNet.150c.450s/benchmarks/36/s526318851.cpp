#include<iostream>
#include<cstdio>
#define N 600
int f(int x){
    return x*x;
}


int main(void){
        int d,i;
        int sum;    
    while(std::cin>>d){
        sum=0;
        for(int i=d;i<N;i+=d){
            sum+=f(i)*d;
        }
        std::cout<<sum<<std::endl;
    }
    return 0;
}