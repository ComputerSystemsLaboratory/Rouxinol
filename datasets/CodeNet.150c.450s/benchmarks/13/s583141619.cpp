#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s, p;
    std::cin >> s >> p;
    size_t sSize = s.size();
    s+=s;
    for(size_t i=0; i<sSize; ++i){
        if(s.substr(i, p.size())==p){
            std::cout << "Yes\n";
            return 0;
        }
    }
    std::cout << "No\n";
    return 0;
}