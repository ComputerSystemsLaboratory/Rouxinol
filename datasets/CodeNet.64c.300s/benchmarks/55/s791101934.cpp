#include <iostream>

int main(){
    int i,x;
    i=1;
    while(true){
        std::cin>>x;
        if(x == 0) break;
        std::cout << "Case "<< i << ": " << x << std::endl;
        i++;
    }
    return 0;
}
