#include <iostream>
#include <algorithm>
#include <string>

#define int long long

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    std::string input;
    std::getline(std::cin, input);
    for(const auto& c : input){
        if(c>='a' && c<='z') std::cout << static_cast<char>(c+'A'-'a');
        else if(c>='A' && c<='Z') std::cout << static_cast<char>(c+'a'-'A');
        else std::cout << c;
    }
    std::cout << "\n";
    return 0;
}