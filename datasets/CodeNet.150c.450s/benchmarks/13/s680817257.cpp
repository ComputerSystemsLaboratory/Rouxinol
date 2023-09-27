#include<iostream>
#include<string>

int main(void){

    std::string str,p;
    std::cin>>str;
    std::cin>>p;
    str+=str;
    if(str.find(p)!=std::string::npos) std::cout<<"Yes"<<std::endl;
    else std::cout<<"No"<<std::endl;
    return 0;
}