#include <iostream>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    if(c-b > 0 && b-a > 0){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    return 0;
}
