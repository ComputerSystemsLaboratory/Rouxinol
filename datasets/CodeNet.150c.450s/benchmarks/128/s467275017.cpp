#include <iostream>
#include <string>
#include <algorithm>
 
int main(void) {
    std::string str;
 
    std::cin >> str;
    std::for_each(str.crbegin(), str.crend(), [](const char& ch){ std::cout << ch; });
    std::cout << std::endl;
 
    return 0;
}