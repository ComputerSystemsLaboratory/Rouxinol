#include <iostream>
#include <string>

int main(){
    std::string str,ken;
    std::cin >> str;
    std::cin >> ken;
    str+=str;
    //std::cout << str << std::endl;
    if((int)str.find(ken)!=-1){std::cout << "Yes" << std::endl;}else{std::cout << "No" << std::endl;}
    return 0;
}