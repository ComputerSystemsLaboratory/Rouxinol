#include<iostream>

int main(){
    long long int a;
    std::cin>>a;
    std::cout<<a<<":";
    bool hantei[1000000];
    for(long long int i=2;i*i<=a+1000;i++){
        if(!hantei[i]){
            for(long long int j=i*2;j*j<=a+1000;j+=i){
                hantei[j]=true;
            }
        }
    }
    for(long long int i=2;i*i<=a+1000;i++){
        if(!hantei[i]){
        while(true){
            if(a%i==0){
                a=a/i;
                std::cout<<" "<<i;
            }else break;
        }
        }
    }
    if(a!=1)std::cout<<" "<<a;
    std::cout<<std::endl;
}
