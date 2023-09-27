#include <iostream>

int main()
{
    int a;
    int b;
    
    while (std::cin >> a >> b){
        int sum;
        int digits;
        
        sum = a + b;
        digits = 1;
        while (sum / 10){
            sum /= 10;
            digits++;
        }
        std::cout << digits << std::endl;
    }
    
    return 0;
}