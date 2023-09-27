#include <iostream>

int main(int argc, const char * argv[]) {
    int x;
    
    std::cin>>x;
    if(x>=1&&x<=100)
       std::cout<<x*x*x<<std::endl;
    
    return 0;
}
