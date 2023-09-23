#include <iostream>

int main(void){
    
    int inputIntA = 0;
    int inputIntB = 0;
    int inputIntC = 0;
    
    std::cin >> inputIntA >> inputIntB >> inputIntC;
    
    if( (inputIntA < inputIntB)
     && (inputIntB < inputIntC) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}