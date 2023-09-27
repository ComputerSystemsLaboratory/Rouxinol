#include<iostream>

int main(){
    int i,n,m;
    for(i=0;i<3000;i++){
        std::cin>> n>> m;
        if(n==0&&m==0) break;
        if(n>=m){
            std::cout<< m<< " "<< n<< std::endl;
        }else{
            std::cout<< n<< " "<< m<< std::endl;
        }
    }
    return 0;
}