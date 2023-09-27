#include <cstring>
#include <clocale>
#include <string>
#include <iostream>

std::string ToLower(std::string& s)
{
    std::string r = s;
    for(int i = 0; i < s.size(); ++i){
        r[i] = tolower(s[i]);
    }
    return r;
}
int main()
{
    std::string W;
    std::cin >> W;
    int C = 0;
    while(true){
        std::string Ti;
        std::cin >> Ti;
        if(Ti == "END_OF_TEXT") break;
        if(ToLower(Ti) == W) C++;
        // if(stricmp(Ti.c_str(), W.c_str()) == 0) C++;
    }
    std::cout << C << std::endl;
    return 0;
}