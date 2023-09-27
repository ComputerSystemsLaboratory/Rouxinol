#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::string str,exstr;
    while(std::cin >> str){
    if(str == "-"){
        break;
    }
    int exnum,b;
    std::cin >> exnum;
    std::vector<int> num;
    num.clear();
    for(int a = 0;a < exnum;a++){
        std::cin >> b;
        num.push_back(b);
        }
    for(int x : num){
        exstr = str.substr(0,x);
        str.erase(str.begin(),str.begin() + x);
        str += exstr;
        }
    std::cout <<str <<std::endl;
    }
    return 0;
}