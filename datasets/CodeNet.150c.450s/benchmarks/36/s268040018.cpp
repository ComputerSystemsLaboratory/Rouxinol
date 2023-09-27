#include<iostream>
int main(){int d,i,s;while(std::cin>>d){for(i=0,s=0;i<600;i+=d)s+=i*i*d;std::cout<<s<<"\n";}return 0;}