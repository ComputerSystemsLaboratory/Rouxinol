#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

int main(){
    std::string s, t;

    std::cin >> s >> t;

    s += s;

    for (int i = 0; i < s.length() / 2; i++) {
        if(s.substr(i, t.length()) == t){
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}