#include<string>
#include<iostream>

int main(void){
    int n;
    std::string taro,hanako;
    int p_taro=0,p_hanako=0;
    std::cin>>n;
    while(n-->0){
        std::cin>>taro>>hanako;
        if(taro>hanako) p_taro+=3;
        else if(taro<hanako) p_hanako+=3;
        else{
            p_taro++;
            p_hanako++;
        }
    }
    std::cout<<p_taro<<" "<<p_hanako<<std::endl;
    return 0;
}
