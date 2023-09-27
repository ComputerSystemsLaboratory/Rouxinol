#include<iostream>
int main(){
int na;
std::cin>>na;
std::cout<<na/3600<<":"<<(na/60)%60<<":"<<na%60<<std::endl;
return 0;
}