#include <iostream>
int main(){
int S,h=0,m=0;
std::cin>>S;
h=S/3600;
S=S%3600;
m=S/60;
S=S%60;
std::cout<<h<<":"<<m<<":"<<S<<std::endl;
}