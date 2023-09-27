#include "iostream"
#include "string"

int main()
{
    int h, m;
    std::string str, temp;
    while(1){
        std::cin >> str;
        if(str == "-") break;
        std::cin >> m;
        for(int i = 0; i < m; i++){
            std::cin >> h;
            temp = str.substr(0, h);
            str = str.substr(h, str.length() - 1);
            str = str + temp;
        }
        std::cout << str << std::endl;
    }
    return 0;
}