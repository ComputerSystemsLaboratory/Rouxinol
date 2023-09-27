#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string str1,str2,str3,str4;
    std::cin >> str1;
    std::cin >> str2;
    int size = str2.size();
    bool result = false;
    
    for(int a = 0;a < str1.size();a++){
        if((size + a) <= str1.size()){
            str3 = str1.substr(a,size);
        }else{
            str3 = str1.substr(a,str1.size()-a);
            str4 = str1.substr(0,(size + a) - str1.size());
            str3 += str4;
        }
        if(str2 == str3){
            result = true;
            break;
        }
    }
    if(result){
        std::cout <<"Yes"<<std::endl;
    }else{
        std::cout <<"No"<<std::endl;
    }
}