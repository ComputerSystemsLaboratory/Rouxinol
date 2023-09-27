#include <iostream>
#include <string>

int KetanoWa(std::string str)
{
    int sum = 0;
    for(std::size_t i = 0; i < str.size(); ++i){
        sum += str[i] - 48;
    }
    return sum;
}
int main()
{
    
    while(true){
        std::string s;
        std::cin >> s;
        int sum = KetanoWa(s);
        if(sum == 0) break;
        std::cout << KetanoWa(s) << std::endl;
    }
    return 0;
}