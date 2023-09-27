#include<iostream>
int main(){int w,m=100000;for(std::cin>>w;w--;m=(m+999)/1000*1000)m+=m*5/100;std::cout<<m<<'\n';}
