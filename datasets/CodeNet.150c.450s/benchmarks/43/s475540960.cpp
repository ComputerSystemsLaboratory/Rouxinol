#include <iostream>

int main(){
    int n,a,b,ina,inb;
    
    while(std::cin >> n,n){
        a=0;b=0;
        for(int i=0;i<n;i++){
            std::cin >> ina >> inb;
            if(ina>inb){
                a += ina + inb;
            }else if(ina==inb){
                a += ina;
                b += inb;
            }else{
                b += ina + inb;
            }
        }
        std::cout << a << ' ' << b << std::endl;
    }
    
    return 0;
}