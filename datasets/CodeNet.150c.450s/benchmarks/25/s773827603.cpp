#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> alpha(26, 0);
    std::string input;
    while(std::cin >> input){
        for(auto& c : input){
            if(c>='A' && c<='Z') c+='a'-'A';
            if(c>='a' && c<='z') ++alpha[c-'a'];
        }
    }
    for(int i=0; i<26; ++i){
        std::cout << static_cast<char>('a'+i) << " : " << alpha[i] << "\n";
    }
    return 0;
}