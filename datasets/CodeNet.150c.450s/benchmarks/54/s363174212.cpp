#include<bits/stdc++.h>
int fuck;
std::string str,value;

int main(){
    std::cin >> value;
    transform(value.begin(), value.end(), value.begin(), tolower);
    while(1){
        std::cin >> str;
        if(str == "END_OF_TEXT") break;
        transform(str.begin(), str.end(), str.begin(), tolower);
        if(str == value)fuck++;
    }

    std::cout << fuck << std::endl;
    return 0;
}