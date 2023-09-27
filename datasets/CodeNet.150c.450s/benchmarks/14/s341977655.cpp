#include<iostream>

bool aho(int a){
    while(a){
        if(a%10==3) return true;
        a/=10;
    }
    return false;
}

int main(void){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 || aho(i)) std::cout<<" "<<i;
    }
    std::cout<<std::endl;
    return 0;
}