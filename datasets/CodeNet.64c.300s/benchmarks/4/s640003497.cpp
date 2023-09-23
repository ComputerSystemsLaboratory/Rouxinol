
#include <iostream>

int main(){
    int a,b,c;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    
    if(a<b&&b<c){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<"No"<<std::endl;
    }
}

