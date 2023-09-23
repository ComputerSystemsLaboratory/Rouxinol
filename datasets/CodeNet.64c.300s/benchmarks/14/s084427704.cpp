#include <iostream>

int main(){
    int a,b;
    std::cin>>a;
    std::cin>>b;
    if((-1000<=a)&&(-1000<=b)&&a<=1000&&b<=1000){
    if(a<b){
        std::cout<<"a < b"<<std::endl;
    }
    else if(a>b){
        std::cout<<"a > b"<<std::endl;
    }else if(a==b){
        std::cout<<"a == b"<<std::endl;
    }
}
}

