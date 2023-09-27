#include <set>
#include <string>
#include <iostream>

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    std::set<std::string> dic;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::string command, str;
        std::cin >> command >> str;
        if(command == "insert"){
            dic.insert(str);
        }else
        if(command == "find"){
            std::cout << (dic.find(str) != dic.end() ? "yes" : "no") << std::endl;
        }
    }
    return 0;
}