#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::string str;
    int q;
    std::cin >> str >> q;
    for(int i=0; i<q; ++i){
        std::string command;
        std::cin >> command;
        if(command=="print"){
            int a, b;
            std::cin >> a >> b;
            for(int i=a; i<=b; ++i){
                std::cout << str[i];
            }
            std::cout << "\n";
        }else if(command=="reverse"){
            int a, b;
            std::cin >> a >> b;
            std::string partStr = str.substr(a, b-a+1);
            for(int i=a; i<=b; ++i){
                str[i] = partStr[b-i];
            }
        }else if(command=="replace"){
            int a, b;
            std::string replaceStr;
            std::cin >> a >> b >> replaceStr;
            for(int i=a; i<=b; ++i){
                str[i] = replaceStr[i-a];
            }
        }
    }
    return 0;
}