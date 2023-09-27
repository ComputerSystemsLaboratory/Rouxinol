#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    std::string x;
    int p=0;
    int num=0;
    while(true){
    std::cin >> x;
        if(x=="0")break;
        for(int i = 0; i < (int)x.size(); ++i){
            int ch = x[i]-'0';
            p=p+ch;
        }
        std::cout << p << std::endl;
        p=0;
    }
    return 0;
}