#include<iostream>
int s;
int main(){
std::cin>>s;
std::cout<<s/3600<<":"<<(s%3600)/60<<":"<<s%60<<std::endl;
return 0;
}