#include <iostream>
#include <algorithm>
#include <string>

#define CHAR_TO_LOWER(c) {if(c>='A' && c<='Z') c+='a'-'A';}
#define STR_TO_LOWER(s) {for(auto& c : s)CHAR_TO_LOWER(c)}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string w;
    std::cin >> w;
    STR_TO_LOWER(w);
    int cnt = 0;
    while(true){
        std::string t;
        std::cin >> t;
        if(t=="END_OF_TEXT") break;
        STR_TO_LOWER(t);
        if(t==w) ++cnt;
    }
    std::cout << cnt << "\n";
    return 0;
}