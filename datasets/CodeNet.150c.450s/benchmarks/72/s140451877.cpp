#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    std::getline(std::cin, s);
    for(size_t i = 0; i < s.size(); ++i){
        char c = s[i];
        if(std::isupper(c)){
            c = std::tolower(c);
        }else if(std::islower(c)){
            c = std::toupper(c);
        }
        std::cout << c;
    }
    std::cout << std::endl; 
    return 0;
}