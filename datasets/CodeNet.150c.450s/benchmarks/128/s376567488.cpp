#include <iostream>

std::string reversed(std::string str)
{
    std::string ret;
    int len;
    
    len = str.length();
    for (int i = 0; i < len; i++){
        ret.append(str, len - 1 - i, 1);
    }
    
    return ret;
}

int main()
{
    std::string str;
    
    std::cin >> str;
    
    std::cout << reversed(str) << std::endl;
    
    return 0;
}