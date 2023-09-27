#include<iostream>
int main(){for(int n,t[10],*p=t;!(std::cin>>n).eof();)n?*p++=n:printf("%d\n",*--p);}