#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    int n,a,b;
    std::string text,mei,oki,str;
    std::cin >> text >> n;
    for (int tes=0;tes<n;tes++){
        std::cin >> mei;
        if(mei=="print"){
            std::cin >> a >> b;
            str=text.substr(a,b-a+1);
            std::cout << str << std::endl;
        }
        if(mei=="replace"){
            std::cin >> a >> b >> oki;
            text=text.replace(a,b-a+1,oki);
        }
        if(mei=="reverse"){
            std::cin >> a >> b;
            std::reverse(text.begin()+a,text.begin()+b+1);
        }
    }
    return 0;
}