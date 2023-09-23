#include <iostream>
#include <cmath>
/*
100
105
111
117
123
130
*/
int main()
{
    int Debt = 100000;
    int Round = 1000;
    Debt /= Round;
    int week;
    std::cin >> week;
    for(int i = 0; i < week; ++i){
        Debt = std::ceil(Debt*1.05);
    }
    Debt *= Round;
    std::cout << Debt << std::endl;
    return 0;
}