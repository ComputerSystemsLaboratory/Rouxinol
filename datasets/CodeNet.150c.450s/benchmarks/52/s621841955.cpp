#include<iostream>
int main(){int a,c=0,s[12];while(std::cin>>a){if(a!=0)s[c++]=a;else std::cout<<s[--c]<<"\n";}return 0;}