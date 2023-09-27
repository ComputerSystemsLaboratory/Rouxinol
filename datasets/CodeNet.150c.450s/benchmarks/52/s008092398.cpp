#include<iostream>
int main(){int a,c=0,s[9999];while(std::cin>>a){if(a!=0)s[c++]=a;else std::cout<<s[--c]<<"\n";}}