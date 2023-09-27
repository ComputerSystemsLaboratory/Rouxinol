#include<iostream>
int main(){int d,i,a;while(std::cin>>d){for(i=1,a=0;i*d<600;i++)a+=i*i*d*d*d;std::cout<<a<<"\n";}}