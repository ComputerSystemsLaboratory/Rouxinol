#include "iostream"
#include "string"

int main()
{
    int m, f, r;

    while(true){
        std::cin >> m >> f >> r;
        if((m + f + r) == -3)
            break;

        if (m < 0 || f < 0)
            std::cout << 'F' << std::endl;
        else if((m + f) >= 80)
            std::cout << 'A' << std::endl;
        else if((m + f) >= 65)
            std::cout << 'B' << std::endl;
        else if((m + f) >= 50)
            std::cout << 'C' << std::endl;
        else if((m + f) >= 30){
            if(r >= 50){
                std::cout << 'C' << std::endl;
            }
            else
                std::cout << 'D' << std::endl;
        }
        else
            std::cout << "F" << std::endl;
    }

    return 0;
}