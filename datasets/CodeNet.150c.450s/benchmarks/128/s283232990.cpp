#include<iostream>
#include<string>
#include<algorithm>

int main(void){

    std::string str;
    std::getline(std::cin,str);
    std::reverse(str.begin(),str.end());
    std::cout<<str<<std::endl;
    return 0;
}
