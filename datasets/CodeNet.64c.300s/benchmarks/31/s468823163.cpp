#include <iostream>
#include <algorithm>
int main(void){
    int n[28];
    bool m[30];
    for(int i=0;i<30;++i){
        m[i]=false;
    }
    for(int i=0;i<28;++i){
        std::cin>>n[i];
    }
    for(int i=0;i<28;++i){
        m[n[i]-1]=true;
    }
    for(int i=0;i<30;++i){
        if(m[i]==false){
            std::cout<<i+1<<std::endl;
        }
    }
    return 0;
}