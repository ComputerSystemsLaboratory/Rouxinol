#include<iostream>
#define MAX_N 45
int F[MAX_N];

int fib(int n){
   if(F[n]>0) return F[n];
   if(n==0 || n==1) return F[n]=1;
   return F[n]=fib(n-1)+fib(n-2);
}

int main(){
   int n;
   std::cin>> n;
   std::cout<< fib(n) << std::endl;
   return 0;
}