#include<iostream>

int main(){
    int a,b,c,i,cnt=0;
    std::cin>> a>> b>> c;
    for(i=1;i<=c;i++){
        if(c%i==0){
            if(a<=i&&i<=b) cnt++;
        }
    }
    std::cout<< cnt<< std::endl;
    return 0;
}