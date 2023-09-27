#include <iostream>

int main(){
    int a,b,c;
    while(std::cin >> a >> b){
        c=a+b;
        a=1;
        while(c/=10,c){
            a++;
        }
        std::cout << a << std::endl;
    }
    return 0;
}