#include <iostream>

int main()
{
    int a,hanako = 0,tosiki = 0;
    std::cin >> a;
    std::string str1,str2;
    for(int b = 0; b < a;b++){
        std::cin >> str1;
        std::cin >> str2;
        if(str1 < str2){
            tosiki = tosiki + 3;
        }
        if(str1 > str2){
            hanako = hanako + 3;
        }
        if(str1 == str2){
            tosiki++;
            hanako++;
        }
    }
    std::cout << hanako <<" "<<tosiki<<std::endl;
    return 0;
}