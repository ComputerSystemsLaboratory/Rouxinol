#include <iostream>
#include <string>

int main()
{
    int num[100], n;
    std::cin>> n;

    for(int i = 0; i < n; i++)
        std::cin>> num[i];

    n -= 1;
    for(; n >= 0; n--)
        if(n > 0)
            std::cout<< num[n] << " ";
        else
            std::cout<< num[n];

    std::cout<< std::endl;

    return 0;
}