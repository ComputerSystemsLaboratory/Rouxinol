#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s1,s2;
    int n = 0;
    std::cin >> s1;
        
    while(std::cin >> s2){
        if(s2 == "END_OF_TEXT")
            break;
        std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        std::transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
        if(s1 == s2)
            n++;
    }
    std::cout << n << std::endl;
      
    return 0;
}