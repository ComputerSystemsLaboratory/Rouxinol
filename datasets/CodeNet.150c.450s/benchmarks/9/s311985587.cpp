#include<iostream>
#include<string>

int main(void){
    std::string s;
    int m,h;
    while(std::cin>>s){
        if(s=="-")break;
        std::cin>>m;
        while(m-->0){
            std::cin>>h;
            s=s.substr(h)+s.substr(0,h);
        }
        std::cout<<s<<std::endl;
    }
    return 0;
}
