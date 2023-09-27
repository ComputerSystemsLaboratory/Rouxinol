#include <iostream>
#include <cmath>
int GetCombination(int n)
{
    int Result = 0;
    for(int a = 0; a <= 9; ++a){
        for(int b = 0; b <= 9; ++b){
            for(int c = 0; c <= 9; ++c){
                for(int d = 0; d <= 9; ++d){
                    if(a+b+c+d == n) ++Result;
                }
            }
        }
    }
    return Result;
}

int main()
{
    while(true){
        int n;
        std::cin >> n;
        if(std::cin.eof()) break;
        std::cout << GetCombination(n) << std::endl;
    }
    return 0;
}