#include<iostream>
int main(){
int na,nb;
std::cin>>na>>nb;
if(na < nb)
std::cout<<"a < b"<<std::endl;
else if(na > nb)
std::cout<<"a > b"<<std::endl;
else 
std::cout<<"a == b"<<std::endl;
return 0;
}